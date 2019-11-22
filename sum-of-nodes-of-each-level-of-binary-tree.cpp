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

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }
    else {
       int leftDepth = height(root->left);
       int rightDepth = height(root->right);
       if(leftDepth > rightDepth )
            return leftDepth + 1;
       else 
            return rightDepth + 1;     
    }
}

void printTraversal(Node* root, int level) {
    if(root == NULL) {
        return;
    }
    if(level == 1) {
        cout<<root->data<<endl;
    }
    else {
        printTraversal(root->left, level -1);
        printTraversal(root->right, level -1);
    }
    
}

void printLevelTraversal(Node* root) {
    int h = height(root);
    for(int i = 1 ; i <= h; i++ ) {
        printTraversal(root, i);
    }
}





int main() {
    Node *root = new Node(1);  
    root->left = new Node(2);  
    root->right = new Node(3);  
    root->left->left = new Node(4);  
    root->left->right = new Node(5); 
    root->left->right->right = new Node(6);  
    printLevelTraversal(root);
    return 0;
}