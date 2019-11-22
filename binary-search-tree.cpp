#include <iostream>
using namespace std;

class Node {
public:    
    int key;
    Node* left;
    Node* right;
    Node(int val) {
        key = val;
        left = right = NULL;
    }
};

Node* insert(Node* root,int val) {
    if(root == NULL ) {
        return new Node(val);
    }
    if(root->key > val) {
        root->left = insert(root->left, val);
    }
    else if(val > root->key) {
        root->right = insert(root->right, val);
    }
    return root;    
}

void inOrder(Node* root) {
    if(root != NULL) {
        inOrder(root->left);
        cout<< root->key <<endl;
        inOrder(root->right);
    }
}

Node* search(Node* root, int val) {
    if(root == NULL || root->key == val) {
        return root;
    }
    if(root->key > val) {
        return search(root->left, val);
    }
    else {
        return search(root->right, val);
    }
}


int main() {

    Node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80);
    int result = search(root, 70)->key;
    inOrder(root); 
    cout<<"FOUND "<<result<<endl; 
   
    return 0;
}