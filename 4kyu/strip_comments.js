//Strip Comments 4th kyu kata
function solution(input, markers) {
  input = input.split('\n');
  for (var i = 0; i < markers.length; i++) {
    for (var j = 0; j < input.length; j++) {
      var index = input[j].indexOf(markers[i]);
      if (index != -1)
        input[j] = input[j].slice(0, index).replace(/\s+$/gm,'');;
    }
  }
  return input.join('\n');
}

