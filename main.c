#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

int main(){
  int vertices = 5;
  Graph* graph = createGraph(vertices);
  addEdge(graph, 0, 1);
  addEdge(graph, 0, 2);
  addEdge(graph, 0, 3);

  addEdge(graph, 1, 0);
  addEdge(graph, 1, 3);

  addEdge(graph, 2, 0);
  addEdge(graph, 2, 3);

  addEdge(graph, 3, 0);
  addEdge(graph, 3, 1);
  addEdge(graph, 3, 2);
  addEdge(graph, 3, 4);

  addEdge(graph, 4, 3);

  printGraph(graph);
  return 0;
}
