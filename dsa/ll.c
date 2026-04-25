#include <stdio.h>
#include <stdlib.h>

// Linked list structure
// Linked list contains Nodes that are connected to each other
// A Node has data and pointer to next node
// Let's create a Node struct

typedef struct Node {
	int data;
	struct Node *nextNode;
} Node;


// write a function that creates a Node
Node *create_node(int data) {
	// create space on heap first for Node
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->nextNode = NULL;
	return node;
}


// Now let's create a linkedlist using this create_node() method
// So essentially what we need is some data array
// from there we can create Nodes
// and will interconnect them to create a whole linked list
Node *create_linked_list(int *arr, int size) {
	// *arr is a pointer to array which is dynamic and can have 'n'
	// number of values
	// First we'll create a head node, which we'll return to at the end to traverse a LL
	// then we'll create a current Node and assing curret = head;
	// Now current and head are pointing same
	// then we'll iterate for i < n - 1 times
	// and creata a New node and assing current that new node
	// like below
	// a (curr and head at initially) -> newNode (curr->next = newNode, curr = newNode) -> (curr->next Node = newNode, curr = newNode) ...

	Node *head = create_node(arr[0]);
	Node *curr = head;
	for (int i = 1; i < size; i++) {
		Node *newNode = create_node(arr[i]);
		curr->nextNode = newNode;
		curr = newNode;
	}
	return head;
}

int main() {
	int n = 5;
	int *arr = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	Node *head = create_linked_list(arr, n);
	Node *temp = head;
	while (temp != NULL) {
		printf("data: %d, nextNode: %p\n", temp->data, temp->nextNode);
		temp = temp->nextNode; 
	}
	return 0;
}
