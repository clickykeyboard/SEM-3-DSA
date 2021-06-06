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

Node* insertNode(Node *node, int data) {
    if (data > node->data) {        // If current node data is greater, go on left
        if (node->right == NULL) {   // Check if the current node's left is NULL
            node->right = createNode(data);
            return node->right;
        }

        insertNode(node->right, data);
    }

    if (data <= node->data) {
      if (node->left == NULL) {
            node->left = createNode(data);
            return node->left;
        }
        
        insertNode(node->left, data);  
    }
}

void checkNodeStatus(Node *node) {
    if (node->left != NULL || node->right != NULL) {
        cout << "The node is a parent" << endl;
        return;
    }

    cout << "The node is a child/leaf" << endl;
}

void preOrder(Node *root) {
    if (root == NULL) {
        return;
    }


    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void displayEvenData(Node *root) {
    if (root == NULL) {
        return;
    }

    if (root->data % 2 == 0)
        cout << root->data << endl;
    
    displayEvenData(root->left);
    displayEvenData(root->right);
}

void displayMultiplesOf3(Node *root) {
    if (root == NULL) {
        return;
    }

    if (root->data % 3 == 0)
        cout << root->data << endl;
    
    displayMultiplesOf3(root->left);
    displayMultiplesOf3(root->right);
}

int sumOfNodes = 0;
int numberOfNodes = 0;

void getAverage(Node *root) {
    
    if (root == NULL) {
        return;
    }

    sumOfNodes += root->data;
    numberOfNodes += 1;
    getAverage(root->left);
    getAverage(root->right);
}


int main() {

    createTree(4);
    insertNode(rootNode, 3);
    insertNode(rootNode, 5);
    insertNode(rootNode, 16);
    insertNode(rootNode, 10);

    checkNodeStatus(rootNode);
    
    displayEvenData(rootNode);

    displayMultiplesOf3(rootNode);

    getAverage(rootNode);
    cout << "Average: " << sumOfNodes / numberOfNodes << endl;
}