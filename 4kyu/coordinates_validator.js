// Coordinates Validator 4th kyu kata
function checkNumbers(str) {
  return (isNaN(str) || /[a-z]/i.test(str));
}

function isValidCoordinates(coordinates) {
  var crd = coordinates.split(', ');

  if (checkNumbers(crd[0]) || checkNumbers(crd[1]))
    return false;

  var clat = Math.abs(parseFloat(crd[0]));
  var clong = Math.abs(parseFloat(crd[1]));

  if (clat >= 90 || clong >= 180)
    return false;

  return true;
}
