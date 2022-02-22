// CPP program to find kth node from middle
// towards Head of the Linked List

#include <bits/stdc++.h>

using namespace std;

// Linked list node
struct Node {
	int data;
	struct Node* next;
};

/* Given a reference (pointer to
pointer) to the head of a list
and an int, push a new node on
the front of the list. */
void push(struct Node** head_ref,
		int new_data)
{
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

// Function to count number of nodes
int getCount(struct Node* head)
{
	int count = 0; // Initialize count
	struct Node* current = head; // Initialize current
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

// Function to get the kth node from the mid
// towards begin of the linked list
int printKthfrommid(struct Node* head_ref, int k)
{
	// Get the count of total number of
	// nodes in the linked list
	int n = getCount(head_ref);

	int reqNode = ((n / 2 + 1) - k);

	// If no such node exists, return -1
	if (reqNode <= 0) {
		return -1;
	}

	// Find node at position reqNode
	else {
		struct Node* current = head_ref;

		// the index of the
		// node we're currently
		// looking at
		int count = 1;
		while (current != NULL) {
			if (count == reqNode)
				return (current->data);
			count++;
			current = current->next;
		}
	}
}

// Driver code
int main()
{
	// start with empty list
	struct Node* head = NULL;
	int k = 2;

	// create linked list
	// 1->2->3->4->5->6->7
	push(&head, 7);
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	cout << printKthfrommid(head, 2);

	return 0;
}