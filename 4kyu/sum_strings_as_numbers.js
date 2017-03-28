// Sum Strings as Numbers 4th kyu kata
function sumStrings(a, b) { 
  var result = String("");
  var longer;
  var shorter;
  var ten = 0;

  if (a.length >= b.length) {
    longer = a;
    shorter = b;
  } else {
    longer = b;
    shorter = a;
  }

  for (var i = longer.length - 1, j = shorter.length - 1; i >= 0; i--, j--)
  {
    var val_a = Number(longer.charAt(i));
    var val_b = (j >= 0 ? Number(shorter.charAt(j)) : 0);
    if (ten) {
      result = result.substr(1, result.length - 1);
    }
    result = String(val_a + val_b + ten) + result;
    ten = (val_a + val_b + ten > 9 ? 1 : 0)
  }
  
  while (result.charAt(0) == "0")
    result = result.substr(1, result.length - 1);
  
  return result;
}
