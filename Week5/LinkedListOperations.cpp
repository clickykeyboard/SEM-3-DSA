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

    temporary = head;
    for (int i = 1; i < position - 1; i++) {
        temporary = temporary->nextNode;
    }

    newNode = new node();
    newNode->data = data;
    newNode->nextNode = temporary->nextNode;
    temporary->nextNode = newNode;

    nodes++;
}

void display() {

    temporary = head;
    while (temporary != NULL) {
        cout << temporary->data << "->";
        temporary = temporary->nextNode;
    }
}

/*
Deletion
Deleting at the beginning
*/

void deleteNodeAtBeginning() {
    temporary = head;
    head = head->nextNode;
    temporary = NULL;

    nodes--;
}

// Delete node at end
void deleteNodeAtEnd() {
    temporary = head;
    while (temporary->nextNode != tail) {
        temporary = temporary->nextNode;
    }

    temporary->nextNode = NULL;
    tail = temporary;

    nodes--;
}

// Delete node at a specific position
void deleteNodeAtSpecificPosition(int position) {
    int first = 1;

    node *temporary2;                                          
    node *temporary3;                                          
    temporary = head;                                          

    while (temporary != NULL) {
        if (position == first) {
            temporary2 = temporary->nextNode;
            temporary3 = temporary2->nextNode;
            temporary->nextNode = temporary3;
        }
        
        first++;
        temporary = temporary->nextNode;
    }

    nodes--;
}

// search for a node with data
void searchNode(int data) {
    temporary = head;

    while (temporary != NULL) {
        if (temporary->data == data) {
            cout << "Found " << data << " " << endl;
            break;
        }

        temporary = temporary->nextNode;
    }
}

main() {

    cout << "Create a linked list first: \n";
    cout << "Enter the data: ";

    int data;
    cin >> data;

    createList(data);
    cout << "List created successfully!" << endl;

    int choice;
    while (true) {

        cout << "\n-----------" << endl;
        cout << "1 - Insert at start" << endl;
        cout << "2 - Insert at end" << endl;
        cout << "3 - Insert at a specific position" << endl;
        cout << "4 - Delete first node" << endl;
        cout << "5 - Delete at specific position" << endl;
        cout << "6 - Delete last node" << endl;
        cout << "7 - Search a given value" << endl;
        cout << "8 - Search number greater than given number" << endl;
        cout << "9 - Display list" << endl;
        cout << "10 - Quit" << endl;
        cout << "Enter choice: " << endl;
        cout << "-----------" << endl;

        cin >> choice;
        if (choice < 1 || choice > 10) {
            cout << "Please enter a valid choice" << endl;
        }

        if (choice == 1) {
            cout << "-----------" << endl;
            cout << "Enter the data: ";
            cin >> data;
            insertNodeAtStart(data);
            cout << "Node inserted at start successfully!";
        }

        if (choice == 2) {
            cout << "-----------" << endl;
            cout << "Enter the data: ";
            cin >> data;
            insertNodeAtEnd(data);
            cout << "Node inserted at end successfully!";
        }

        if (choice == 3) {
            cout << "-----------" << endl;
            cout << "Enter the data: ";
            cin >> data;
            int position;
            cout << "Enter the position: ";
            cin >> position;
            insertNodeAtSpecificPosition(position, data);
            cout << "Node inserted at position " << position << " successfully!" << endl;
        }

        if (choice == 4) {
            cout << "-----------" << endl;
            deleteNodeAtBeginning();
            cout << "Node deleted at start successfully!" << endl;
        }

        if (choice == 5) {
            cout << "-----------" << endl;
            int position;
            cout << "Enter the position: ";
            cin >> position;
            deleteNodeAtSpecificPosition(position);
            cout << "Node deleted at " << position << " successfully!" << endl;
        }

        if (choice == 6) {
            cout << "-----------" << endl;
            deleteNodeAtEnd();
            cout << "Node deleted at end successfully!" << endl;
        }

        if (choice == 7) {
            cout << "-----------" << endl;
            cout << "Enter the value to search: " << endl;
            cin >> data;
            searchNode(data);
        }

        if (choice == 9) {
            cout << "-----------" << endl;
            display();
        }

        if (choice == 10) {
            cout << "Exiting...";
            break;
        }
    }

}
