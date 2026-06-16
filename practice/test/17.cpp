#include <bits/stdc++.h>
using namespace std;

// Doubly Node
struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};


Node *create_node(int data) {
	Node *n = (Node *)malloc(sizeof(Node));
	n->data = data;
	n->next = NULL;
	n->prev = NULL;
	return n;
}

void printList(Node *head) {
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << '\n';
		temp = temp->next;
	}
}
int main() {
	Node *head = create_node(19);	
	Node *last = NULL;
	head->next = last;
	Node *temp = head;
	int nodes = 3;
	for (int i = 1; i < nodes; i++)  {
		Node *middle = (Node *)malloc(sizeof(Node));
		middle->data = i;
		temp->next = middle;
		temp= middle;
	}
	printList(head);
	return 0;
}
