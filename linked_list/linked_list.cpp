#include <iostream>
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

class LinkedList {
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        else {
            newNode->next = head;
            head = newNode;
        }

    }
    void pop_front() {
        Node* temp = head;
        head = head->next;
        delete temp;

    }
    void insert(int val, int pos) {
        if (pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 0) {
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i = 0; i < pos-1; i++) {
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void print() {
        Node* temp = head;
        while(temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main() {

    return 0;
}