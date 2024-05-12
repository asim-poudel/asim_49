#include "LinkedList.h"

class Stack : public LinkedList {
public:
    Stack() {}
    ~Stack() {}

    // Push an item onto the stack
    void push(int item) {
        addToHead(item);
    }

    // Pop an item from the stack
    int pop() {
        int item = topElement();
        removeFromHead();
        return item;
    }

    //Return the latest item of the stack
    int top(){
        int item = topElement();
        return item;
    }
    // Check if the stack is empty
    bool isempty() {
      return isEmpty();
}
};
int main() {
    Stack s;

    s.push(1);
    s.pop();
    s.push(2);
    s.push(3);

    return 0;
};

