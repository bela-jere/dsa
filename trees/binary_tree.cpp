#include <iostream> 
#include <vector>
#include <queue>
using namespace std; 
class Node {
public: 
    int data; 
    Node* left; 
    Node* right; 
    Node(int val) {
        data = val; 
        left = nullptr;
        right = nullptr;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder) {
    idx++;
    if (preorder[idx] == -1) {
        return nullptr; 
    }
    Node* root = new Node(preorder[idx]); 
    root->left = buildTree(preorder); 
    root->right = buildTree(preorder); 
    return root;
}

//preorder traversal (recurrsive)
void preOrder(Node* root) {
    if(root == nullptr) { 
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left); 
    preOrder(root->right);

}

//inorder traversal (recurrsive)
void inOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    inOrder(root->left); 
    cout << root->data << " ";
    inOrder(root->right);
}

//post order traversal (recurrsive)
void postOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right); 
    cout << root->data << " ";
}

//level order traversal (iterative)
void levelOrder(Node* root) {
    queue<Node*> q;
    q.push(root); 
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left != nullptr) {
            q.push(curr->left);
        }
        if(curr->right != nullptr) {
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root); 
    cout << endl;
    levelOrder (root);
    cout << endl;
    return 0;
}