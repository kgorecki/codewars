// Hard Time Bomb 3rd kyu kata
var wireCode; // Find the wire.
var vars = Object.keys(global);
for (var i = 0; i < vars.length; i++)
  for (var j = 0; j < vars[i].length; j++)
    if (!isNaN(vars[i][j]))
      wireCode = vars[i];

Bomb.CutTheWire(global[wireCode]);


// another approach
var wireCode;
var gkeys = Object.keys(global);
for (var i = 0; i < gkeys.length; i++)
  if (gkeys[i].indexOf('boom') != -1)
    wireCode = global[gkeys[i]];
Bomb.CutTheWire(wireCode);

