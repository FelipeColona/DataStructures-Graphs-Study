#include "Graph.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

Graph *createGraph(int vertices, bool isUndirected) {
  Graph *graph = malloc(sizeof(Graph));
  graph->vertices = vertices;
  graph->array = malloc(vertices * sizeof(Node));
  graph->isUndirected = isUndirected;

  for (int i = 0; i < vertices; i++) {
    graph->array[i].value = -1;
    graph->array[i].nextNode = NULL;
  }

  return graph;
}

void addEdge(Graph *graph, int source, int destination) {
  if (source > graph->vertices || destination > graph->vertices){
    printf("SOURCE OR DESTINATION GIVEN EXCEEDS THE NUMBER OF VERTICES");
  }

  if (graph->isUndirected) {
    // from source to destination
    if (graph->array[source].value == -1) {
      graph->array[source].value = destination;
    } else {
      add(&graph->array[source], destination);
    }

    // from destination to source
    if (graph->array[destination].value == -1) {
      graph->array[destination].value = source;
    } else {
      add(&graph->array[destination], source);
    }
  } else {
    if (graph->array[source].value == -1) {
      graph->array[source].value = destination;
    } else {
      add(&graph->array[source], destination);
    }
  }
}

void printGraph(Graph *graph) {
  for (int i = 0; i < graph->vertices; i++) {
    printf("Adjencency list of vertex %d\n", i);
    printLinkedList(&graph->array[i]);
    printf("\n");
  }
}
