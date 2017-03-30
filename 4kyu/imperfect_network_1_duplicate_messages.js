// Imperfect Network #1 (duplicate messages) 4th kyuy kata

function NetworkClient (sendFunction, callback) {
  this.sendFunction = sendFunction;
  this.callback = callback;
  this.sent_counter = 0;
  this.last_message;
}

NetworkClient.prototype.send = function (data) {
  this.sendFunction(JSON.stringify({id: this.sent_counter, msg: data}));
  this.sent_counter++;
};

NetworkClient.prototype.recv = function (data) {
  data = JSON.parse(data);
  if (this.last_message != data.id) {
    this.last_message = data.id;
    this.callback(data.msg);
  }
};

