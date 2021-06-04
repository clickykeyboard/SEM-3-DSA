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

void insertNode(Node *node, int data) {
    if (data > node->data) {        // If current node data is greater, go on left
        if (node->right == NULL) {   // Check if the current node's left is NULL
            node->right = createNode(data);
            return;
        }

        insertNode(node->right, data);
    }

    if (data <= node->data) {
      if (node->left == NULL) {
            node->left = createNode(data);
            return;
        }
        
        insertNode(node->left, data);  
    }
}

Node* searchNode(Node *node, int data) {
    if (data == node->data) {
        cout << "Node found: " << node->data << ", " << node << endl;
        return node;
    }

    if (data <= node->data) {
        return searchNode(node->left, data);
    }

    if (data > node->data) {
        return searchNode(node->right, data);
    }

    return NULL;
}


int main() {

    createTree(4);
    insertNode(rootNode, 3);
    insertNode(rootNode, 6);
    insertNode(rootNode, 12);
    insertNode(rootNode, 13);
    insertNode(rootNode, 11);

    searchNode(rootNode, 11);
}