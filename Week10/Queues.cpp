#include <iostream>

using namespace std;

const int QUEUE_SIZE = 5;
int queue[QUEUE_SIZE];

int front = -1, rear = -1;

bool isEmpty() {
    return front == -1 && rear == -1;
}

bool isFull() {
    return rear == QUEUE_SIZE - 1;
}

void enqueue(int data) {
    if (isFull()) {
        cout << "The queue is full" << endl;
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
        queue[front] = data;
        return;
    }

    rear++;
    queue[rear] = data;
}

int dequeue() {
    if (isEmpty()) {
        cout << "The queue is empty" << endl;
        return 0;
    }

    if (front == 0 && rear == 0) {
        front = rear = -1;
        return queue[1];
    }

    if (front == rear) {
        int dequeuedValue = queue[rear];
        front = rear = -1;
        return dequeuedValue;
    }

    front++;
    return queue[front - 1];
}

void display() {
    for (int i = front; i <= rear; i++) {
        cout << queue[i];
    }
}

main() {

    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);

    display();

}