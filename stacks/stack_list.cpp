#include <iostream> 
#include <list>
using namespace std;
class Stack {
    private: 
        list<int> stack;
    public:
        void push(int value) {
            stack.push_front(value); 
        }
        void pop() {
            if(stack.empty()) {
                cout << "Stack underflow!" << endl;
                return;
            }
            stack.pop_front();

        }
        int top() {
            if(stack.empty()) {
                cout << "Stack is empty!" << endl;
                return -1; // Return -1 to indicate stack is empty
            }
            return stack.front();
        }
        bool empty () {
            return stack.empty();
        }
};

int main() {
    Stack s; 
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // Output: Top element: 30
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Output: Top element after pop: 20
    s.pop();
    s.pop();
    s.pop(); // This will trigger stack underflow
    return 0;
}