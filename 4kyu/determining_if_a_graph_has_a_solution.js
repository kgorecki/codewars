// Determining if a graph has a solution 4th kyu kata
function solve_graph(start, end, arcs) {
  var graph = [start];
  var points = new Set();
  while (graph.length) {
    var current = graph.pop();
    if (current == end)
      return true;
    points.add(current);
    for (var i = 0; i < arcs.length; i++) {
      var dest = arcs[i];
      if (current == dest.start && !points.has(dest.end))
        graph.push(dest.end);
    }
  }
  return false;
}

