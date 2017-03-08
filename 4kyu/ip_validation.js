// IP Validation 4th kyu kata

// without regular expression
function isIntegerRE(str) {
  return /^\+?(0|[1-9]\d*)$/.test(str);
}

function isInteger(str) {
  var number = parseInt(str);
  return (String(number) === str);
}

function isValidIP(str) {
  var pcs = str.split('.');

  if (pcs.length != 4)
    return false;

  for (var i = 0; i < 4; i++) {
    var number = parseInt(pcs[i]);
    if (!isInteger(pcs[i]) || number > 255)
      return false;
  }

  return true;
}


// fully based on regular expression
function isValidIP(str) {
  return (/^(?=\d+\.\d+\.\d+\.\d+$)(?:(?:25[0-5]|2[0-4][0-9]|1[0-9]{2}|[1-9][0-9]|[0-9])\.?){4}$/.test(str));
}

