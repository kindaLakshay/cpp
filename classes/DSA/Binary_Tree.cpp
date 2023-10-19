// to create a binary tree, using recursion and display the inorder terms
#include<iostream>
using namespace std;

struct Node
{
    char data;
    Node* left;
    Node* right;
};

Node* create()
{
    char val;
    cout<<"Enter the Element(or 'X' for no element): ";
    cin>>val;

    if (val=='X') return NULL;

    Node* newnode = new Node;
    newnode->data = val;
    cout<<"Enter the left child of "<<val<<" : ";
    newnode->left = create();
    cout<<"Enter the right child of "<<val<<" : ";
    newnode->right = create();
    
    return newnode;
}

void display(Node *root)
{
    if (root == NULL)
        return;
    display(root->left);
    cout << root->data;
    display(root->right);
}

int main() {
    
    Node* root=NULL;
    root = create();
    cout<<"Binary tree created Successfully"<<endl;
    cout<<"Inorder traversal of the tree: ";
    display(root);
    cout<<endl<<endl;
    return 0;
}