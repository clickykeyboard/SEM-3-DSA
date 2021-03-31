#include <iostream>
using namespace std;

// LinkedList Node - structures

struct Node {
    int data;
    struct Node *nextNode;
};

// Insertion at the beginning of the list

void insert(struct Node **head, int value) {
    // create a node
    struct Node *newNode = new Node();
    // assigning value to data 
    newNode->data = value;
    // set new node's next node to head
    newNode->nextNode = *head;
    // move head to new node
    *head = newNode; 
}

void displayList(struct Node *node) {

    // while the current node is not NULL
    while(node != NULL) {
        cout << node->data << " -> ";
        // set the current node to the next node
        node = node->nextNode;
    }

}


main() {

    struct Node *headNode = NULL;

    insert(&headNode, 24);
    insert(&headNode, 45);
    insert(&headNode, 458);
    insert(&headNode, 65);
    insert(&headNode, 2);

    displayList(headNode);


}