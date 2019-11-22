#include <iostream>
using namespace std;

class Node {
public : 
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


int depth(Node* root) {
    if(root == NULL) {
        return 0;
    }
    else {
       int leftDepth = depth(root->left);
       int rightDepth = depth(root->right);
       if(leftDepth > rightDepth )
            return leftDepth + 1;
       else 
            return rightDepth + 1;     
    }
        
}


void inOrder(Node* root) {
    if(root != NULL) {
        inOrder(root->left);
        cout<< root->data <<endl;
        inOrder(root->right);
    }
}

int main() {
    Node *root = new Node(1);  
    root->left = new Node(2);  
    root->right = new Node(3);  
    root->left->left = new Node(4);  
    root->left->right = new Node(5); 
    root->left->right->right = new Node(6);  
    inOrder(root);
    cout<<"Max Height of tree is "<<depth(root)<<endl;
    return 0;
}