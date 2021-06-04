#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

Node *tempNode;
Node *rootNode = NULL;

Node* createNode(int data) {
    tempNode = new Node();
    tempNode->data = data;
    tempNode->left = tempNode->right = NULL;
    return tempNode;
}

void createTree(int data) {
    if (rootNode != NULL) {
        cout << "The three already exists!" << endl;
        return;
    }

    // Allocate memory for a new node and initialize its values
    tempNode = createNode(data);
    tempNode->data = data;
    tempNode->left = tempNode->right = NULL;
    
    // Set the value of the root node to the newly allocated new node
    rootNode = tempNode;
    printf("The tree root has been created\n");
}

int main() {
    createTree(4);
}