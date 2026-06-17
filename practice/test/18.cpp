#include <bits/stdc++.h>
using namespace std;


// Doubly Node
struct DoublyNode {
	int data;
	struct DoublyNode *next;
	struct DoublyNode *prev;
};


DoublyNode *create_node(int data) {
	DoublyNode *dn = (DoublyNode *)malloc(sizeof(DoublyNode));
	dn->data = data;
	dn->next = NULL;	
	dn->prev= NULL;	
	return dn;
}

void display_ll(DoublyNode *head) {
	DoublyNode *t = head;
	while (t != NULL) {
		cout << t->data << " ";
		t = t->next;
	}
}


DoublyNode *sortedInsert(DoublyNode *head, int data) {
	DoublyNode *tail = head;
	while (tail != NULL) {
		if (tail->next != NULL && data >= tail->data && data <= tail->next->data) {
			DoublyNode *temp = create_node(data);
			temp->next = tail->next;
			temp->prev = tail;

			tail->next->prev = temp;
			tail->next = temp;

			return head;
		}	
		tail = tail->next;
	}
	return NULL;
}

void create_doubly(DoublyNode *head, int arr[], int size) {
	DoublyNode *tail = head;

	for (int i = 1; i < size; i++) {
		DoublyNode *temp = create_node(arr[i]);
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int size;
		cin >> size;
		int arr[size];
		for (int i = 0; i < size; i++) {
			int x; cin >> x;
			arr[i] = x;
		}
		int d;
		cin >> d;
		DoublyNode *head = create_node(arr[0]);
		create_doubly(head, arr, size);
		//display_ll(head);
		sortedInsert(head, d); 
		display_ll(head);
	}
	return 0;
}
