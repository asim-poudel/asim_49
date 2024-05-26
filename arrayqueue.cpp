#include "array.h"
#include <iostream>

using namespace std;


Queue::Queue() : front_index(0), rear_index(0) {}

int Queue::enqueue(int element) {
    if (isFull()) {
        cerr<<"Queue is full. Cannot enqueue element."<<endl;
        return 0;
    }
    rear_index = (rear_index + 1) % MAX_SIZE;
    arr[rear_index] = element;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cerr<<"Queue is empty. Cannot dequeue element."<<endl;
        return -1;
    }
    int element = arr[front_index];
    front_index = (front_index + 1) % MAX_SIZE;
    return element;
}

bool Queue::isEmpty() {
    return rear_index == front_index;
}

bool Queue::isFull() {
    return (rear_index + 1) % MAX_SIZE == front_index;
}

int Queue::front() {
    if (isEmpty()) {
        cerr<<"Queue is empty. No front element." <<endl;
        return -1;
    }
    return arr[front_index];
}

int Queue::back() {
    if (isEmpty()) {
        cerr<<"Queue is empty. No back element."<<endl;
        return -1;
    }
    return arr[rear_index];
}

int main(){
    Queue queue;
    queue.enqueue(111);
    queue.enqueue(222);
    queue.enqueue(322);

    cout << "front element of queue: " << queue.front() << endl;
    cout << "Back element of queue: " << queue.back() << endl;
    cout << "Dequeued element from queue: " << queue.dequeue() << endl;
    cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (queue.isFull() ? "Yes" : "No") << endl;

    return 0;

}