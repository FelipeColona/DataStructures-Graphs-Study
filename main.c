#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main(){
  Node *head = malloc(sizeof(Node));
  head->value = 1;
  add(head, 2);
  add(head, 3);

  return 0;
}
