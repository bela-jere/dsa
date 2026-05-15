#include <iostream>
#include <vector>
using namespace std;

// vector implementation of stack
class Stack {
private:
    std::vector<int> stack;
public:
    void push(int value) {
        stack.push_back(value); 
    }
    void pop() {
        if (!stack.empty()) {
            stack.pop_back(); 
        } else {
            cout << "Stack underflow!" << endl;
        }
    }
    int top() {
        if (!stack.empty()) {
            return stack.back(); 
        } else {
            cout << "Stack is empty!" << endl;
            return -1; // Return -1 to indicate stack is empty
        }
    }
    bool isEmpty() {
        if(stack.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Stack s; 
    s.push(10);
    s.push(20);
    s.push(30);

    return 0;
}
