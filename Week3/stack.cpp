#include <iostream>

using namespace std;

#define SIZE 6

int stack[SIZE];
int top = -1;

bool isEmpty() {
    if (top == -1)
        return true;
    
    return false;
}

void push(int value) {
    
    if (top == SIZE) {
        cout << "The stack is full" << endl;
    } else {
        top++;
        stack[top] = value;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "The stack is empty" << endl;
    } else {
        top--;
        cout << "The element has been popped" << endl;;
    }
}

void display() {
    if (isEmpty()) {
        cout << "The stack is empty" << endl;
    } else {
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
    }
    cout << endl;
}

main() {

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    display();

    pop();

    display();

    pop();
    pop();
    pop();
    pop();

}   
