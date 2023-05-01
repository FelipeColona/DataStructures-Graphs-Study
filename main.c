#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

int main(){
  int vertices = 10;
  Graph* graph = createGraph(vertices, true);

  addEdge(graph, 0, 1); 
  addEdge(graph, 0, 2); 

  addEdge(graph, 1, 2); 
  addEdge(graph, 1, 4); 
  addEdge(graph, 1, 3); 

  addEdge(graph, 3, 5); 

  addEdge(graph, 5, 6); 
  addEdge(graph, 5, 7); 

  addEdge(graph, 7, 8); 

  addEdge(graph, 8, 5); 
  addEdge(graph, 8, 9); 


  printGraph(graph);
  return 0;
}
