#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
    int data; 
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Queue {
    Node* head;
    Node* tail;
public:
    Queue() {
        head = nullptr;
        tail = nullptr;
    }

    //push node to the end of the list (tail)
    void push(int data) {
        Node* newNode = new Node(data); 
        if(empty()) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if(empty()) {
            cout << "LL is empty";
            return;
        }
        else {
            Node* curr = head;
            head = curr->next;
            delete curr; 

        }
    }

    int front() {
        if(empty()) {
            cout << "LL is empty";
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == nullptr;
    }
};

int main() {
    Queue q; 
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}