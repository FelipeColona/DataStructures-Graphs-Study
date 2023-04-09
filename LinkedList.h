typedef struct Node{
  int value;
  struct Node *nextNode;
} Node;

void add(Node *head, int value);
Node* pop(Node *head);
Node* removeByIndex(Node *head, int index);
Node* get(Node *head, int index);
void printLinkedList(Node *node);
int length(Node *head);
