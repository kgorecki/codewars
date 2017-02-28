// Complex CSV Parser 3rd kyu kata
function parseCSV(input, separator, quote) {
  separator = separator || ',';
  quote = quote || '"';
  var in_quote = false;
  var row = 0;
  var col = 0;
  var c = 0;
  var result = new Array();
  result[row] = new Array();
  result[row][col] = "";

  for (; c < input.length; c++) {
    var cc = input[c];
    var nc = input[c + 1];

    result[row] = result[row] || new Array();
    result[row][col] = result[row][col] || "";

    if (cc == quote && in_quote && nc == quote) {
      result[row][col] += cc;
      ++c;
    } else if (cc == quote)
      in_quote = !in_quote;
    else if (cc == separator && !in_quote)
      ++col;
    else if (cc == "\n" && !in_quote) {
      ++row;
      col = 0;
    }
    else
      result[row][col] += cc;
  }

	if (in_quote)
		throw "Unfinished quotation found!";

  return result;
}
