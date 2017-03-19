// Hard Time Bomb 4th kyu kata
var wireCode; // Find the wire.
var vars = Object.keys(global);
for (var i = 0; i < vars.length; i++)
  for (var j = 0; j < vars[i].length; j++)
    if (!isNaN(vars[i][j]))
      wireCode = vars[i];

Bomb.CutTheWire(global[wireCode]);

