#include "LinkedList.h"

typedef struct Graph {
  int vertices;
  Node* array;
} Graph;

Graph* createGraph(int vertices);
void addEdge(Graph *graph, int source, int destination);
void printGraph(Graph *graph);
