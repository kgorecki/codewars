// Range Extraction 4th kyu kata
function solution(list){
  var result = [];
  var begin = 0;
  var inRange = false;
  for (var i = 0; i < list.length; i++) {
    if (list[i] + 1 == list[i + 1] && !inRange) {
      inRange = true;
      begin = list[i];
    } else if (list[i] + 1 != list[i + 1] && inRange) {
      inRange = false;
      if (list[i] - begin >= 2)
        result.push(begin.toString() + '-' + list[i].toString());
      else {
        result.push(begin.toString());
        result.push(list[i]);
      }
    } else if (list[i] + 1 != list[i + 1])
      result.push(list[i].toString());
  }
  return result.join(',');
}

