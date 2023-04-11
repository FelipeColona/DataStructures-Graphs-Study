#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

Graph* createGraph(int vertices){
  Graph *graph = malloc(sizeof(Graph));
  graph->vertices = vertices; 
  graph->array = malloc(vertices * sizeof(Node));

  for(int i = 0; i < vertices; i++){
    graph->array[i].value = -1;
    graph->array[i].nextNode = NULL;
  }

  return graph;
}

void addEdge(Graph *graph, int source, int destination){
  if (graph->array[source].value == -1){
    graph->array[source].value = destination;
  }
  else{
    add(&graph->array[source], destination); 
  }
}

void printGraph(Graph *graph){
  for (int i = 0; i < graph->vertices - 1; i++) {
    printf("Adjencency list of vertex %d\n", i);
    printLinkedList(&graph->array[i]);
    printf("\n");
  }
}
