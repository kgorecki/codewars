// Did I Finish my Sudoku 5th kyu kata
function validateCol(col) {
  var result = new Array(9);
  for (var i = 0; i < 9; i++)
    result[i] = 0;
  for (var i = 0; i < 9; i++) {
    result[col[i]-1] += 1;
  }
  for (var i = 0; i < 9; i++)
    if (!result[i])
      return false;
  return true;
}

function doneOrNot(board) {
  //check rows
  for (var i = 0; i < 9; i++)
    if (!validateCol(board[i]))
      return "Try again!";
  var col = new Array(9);
  //check columns
  for (var i = 0; i < 9; i++) {
    for (var j = 0; j < 9; j++)
      col[j] = board[j][i];
    if (!validateCol(col))
      return "Try again!";
  }
  //check regions
  for (var i = 0; i < 3; i++)
    for (var j = 0; j < 3; j++) {
      for (var a = 0, c = 0; a < 3; a++)
        for (var b = 0; b < 3; b++, c++)
          col[c] = board[i * 3 + a][j * 3 + b];
      if (!validateCol(col))
        return "Try again!";
    }

  return "Finished!";  
}