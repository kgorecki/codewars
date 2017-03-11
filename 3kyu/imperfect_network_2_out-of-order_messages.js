// Imperfect Network #2 (out-of-order messages) 3rd kyu kata
function NetworkClient (sendFunction, callback) {
  this.sendFunction = sendFunction;
  this.callback = callback;
  this.messages = new Array();
  this.sent_counter = 0;
  this.last_displayed = 0;
}

NetworkClient.prototype.send = function (data) {
  // Could wrap data with extra information to send
  this.sendFunction(JSON.stringify({id: this.sent_counter, msg: data}));
  this.sent_counter++;
};

NetworkClient.prototype.recv = function (data) {
  // Could unpack data and validate
  var i = 0;
  data = JSON.parse(data);
  this.messages[data.id] = data.msg;
  for (i = this.last_displayed; this.messages[i] !== undefined; i++)
    this.callback(this.messages[i]);
  this.last_displayed = i;
};

