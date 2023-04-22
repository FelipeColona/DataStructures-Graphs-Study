#include "LinkedList.h"
#include <stdbool.h>

typedef struct Graph {
  int vertices;
  bool isUndirected;
  Node* array;
} Graph;

Graph* createGraph(int vertices, bool isUndirected);
void addEdge(Graph *graph, int source, int destination);
void printGraph(Graph *graph);
