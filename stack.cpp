#include "linkedlist.h"

class Stack : public LinkedList {
public:
    Stack() {}
    ~Stack() {}

    void push(int item) {
        addToHead(item);
    }

    int pop() {
        int item = topElement();
        removeFromHead();
        return item;
    }

    int top(){
        int item = topElement();
        return item;
    }

    bool isempty() {
      return isEmpty();
}
};
int main() {
  Stack stack;
    stack.push(369);
    stack.push(36);
    stack.push(69);
    stack.push(35);

    cout << "Popped element from stack: " << stack.pop() << endl;
    cout << "Top element of stack: " << stack.top() << endl;
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;


    return 0;
};

