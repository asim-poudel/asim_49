#include "array.h"
#include <iostream>

using namespace std;

Stack::Stack() : topIndex(-1) {}

int Stack::push(int element) {
    if (isFull()) {
        cerr<<"Stack is full. Cannot push element."<<endl;
        return 0;
    }
    arr[++topIndex] = element;
}

int Stack::pop() {
    if (isEmpty()) {
        cerr<<"Stack is empty. Cannot pop element."<<endl;
        return -1;
    }
    return arr[topIndex--];
}

bool Stack::isEmpty() {
    return topIndex == -1;
}

bool Stack::isFull() {
    return topIndex == MAX_SIZE - 1;
}

int Stack::top() {
    if (isEmpty()) {
        cerr<<"Stack is empty. No top element."<<endl;
        return -1;
    }
    return arr[topIndex];
}

int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element of stack: " << stack.top() << endl;
    cout << "Popped element from stack: " << stack.pop() << endl;
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (stack.isFull() ? "Yes" : "No") << endl;

}