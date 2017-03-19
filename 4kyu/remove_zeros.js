// Remove Zeros 4th kyu kata
function removeZeros(array) {
  for (var i = 0, k = 0; i < array.length, k < array.length; i++, k++)
    if (array[i] === 0 || array[i] === '0') {
      var zero = array[i];
      for (var j = i; j < array.length - 1; j++) {
        array[j] = array[j + 1];
      }
      array[array.length - 1] = zero;
      i--;
    }
  return array;
}

