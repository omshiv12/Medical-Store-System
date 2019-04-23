#ifndef LINKED_H
#define LINKED_H

struct node{
    void *data;
    struct node *next;
};

typedef struct list{
    int length;
    struct node *head;
} LinkedList;

typedef struct node Node;

Node *createNode(void *data);
LinkedList *createLinkedList();
void addNode(LinkedList *ll, Node *n);
void removeLastNode(LinkedList *ll);

#endif

	
	
