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

int main() {

    createTree(4);
    cout << "root: " << rootNode->data << " " << rootNode->left << " " << rootNode->right << endl;
    insertNode(rootNode, 3);
    cout << "root: " << rootNode->left->data << " " << rootNode->left->left << " " << rootNode->left->right << endl;
    insertNode(rootNode, 6);
    cout << "root: " << rootNode->right->data << " " << rootNode->right->left << " " << rootNode->right->right << endl;
    insertNode(rootNode, 12);
    cout << "root: " << rootNode->right->right->data << " " << rootNode->right->right->left << " " << rootNode->right->right->right << endl;

}