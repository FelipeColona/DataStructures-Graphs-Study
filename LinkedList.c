#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void add(Node *head, int value){
  Node *currentNode = head;  
  while (currentNode->nextNode != NULL) {
    currentNode = currentNode->nextNode;
  }
  currentNode->nextNode = malloc(sizeof(Node));
  currentNode->nextNode->value = value;
  currentNode->nextNode->nextNode = NULL;
}


Node* pop(Node *head){
  Node *newHead = head->nextNode;
  free(head);

  return newHead;
}

Node* removeByIndex(Node *head, int index){
  if(index == 0){
    return pop(head);
  } else {
    Node *currentNode = head;  
    int i = 0;
    while(i < index - 1 && currentNode->nextNode != NULL){
      currentNode = currentNode->nextNode;
      i++;
    }
    Node *temp = currentNode->nextNode;
    currentNode->nextNode = currentNode->nextNode->nextNode;
    free(temp);
  }

  return head;
}


Node* get(Node *head, int index){
  Node *currentNode = head;

  int i = 0;
  while(i < index && currentNode->nextNode != NULL){
    currentNode = currentNode->nextNode;
    i++;
  }
  return currentNode;
}

void printLinkedList(Node *node){
  Node *currentNode = node;  
  while (currentNode != NULL) {
    printf("%d \n", currentNode->value);
    currentNode = currentNode->nextNode;
  }
}

int length(Node *head){
  Node *currentNode = head;

  int i = 0;
  while(currentNode != NULL){
    currentNode = currentNode->nextNode;
    i++;
  }
  return i;
}
