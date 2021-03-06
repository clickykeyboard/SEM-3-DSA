#include <iostream>

using namespace std;

int nodes = 0;

struct node {

    int data;
    node *nextNode;

} *head, *tail, *newNode, *temporary;

// Create new node
void createList(int data) {
    if (head == NULL) { 
        newNode = new node();
        newNode->data = data;
        newNode->nextNode = NULL;
        head = newNode;
        tail = newNode;

        nodes++;
        return;
    }

    cout << "List already created" << endl;
}

// Insertion at the beginning
void insertNodeAtStart(int data) {
    if (head == NULL) {
        cout << "Create the list first" << endl;
        return;
    }

    newNode = new node();
    newNode->data = data;
    newNode->nextNode = head;
    head = newNode;
    nodes++;
}

// Insertion at the end
void insertNodeAtEnd(int data) {
    if (head == NULL) {
        cout << "Create a list first" << endl;
        return;
    }

    newNode = new node();
    newNode->data = data;
    newNode->nextNode = NULL;

    tail->nextNode = newNode;
    tail = newNode;

    nodes++;
}

// Insertion at a specific position
void insertNodeAtSpecificPosition(int position, int data) {
    if (head == NULL) {
        cout << "Create the list first" << endl;
        return;
    }

    int first = 1;

    temporary = head;
    while (temporary != NULL) {
        if (position - 1 == first) {
            newNode = new node();
            newNode->data = data;
            newNode->nextNode = temporary->nextNode;
            temporary->nextNode = newNode;
        }
    
        first++;
        temporary = temporary->nextNode;
    }

    nodes++;

}

void display() {

    temporary = head;
    while (temporary != NULL) {
        cout << temporary->data << endl;
        temporary = temporary->nextNode;
    }

}

main() {

    createList(5);

    insertNodeAtStart(4);
    insertNodeAtStart(3);
    insertNodeAtStart(2);
    insertNodeAtStart(1);

    insertNodeAtEnd(6);
    insertNodeAtEnd(7);
    insertNodeAtEnd(8);
    insertNodeAtEnd(9);

    insertNodeAtSpecificPosition(3, 44);

    display();

}
