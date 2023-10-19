// 9,5,7,15,12,4,6,9,10,2,13
// M, P

// WAP to create a Binary Search Tree
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};


void display(Node *root)
{
    if (root == NULL)
        return;
    display(root->left);
    cout << root->data;
    display(root->right);
};

Node* create(int item)
{
    Node* node=new Node;
    node->data = item;
    node->left=NULL;
    node->right=NULL;
    return node;
};

Node* insert(Node* root, int item)
{
    if (root == NULL) return create(item);

    if (item<root->data) 
        root->left = insert(root->left, item);
    if(item>root->data)
        root->right = insert(root->right, item);
    return root;
};

int main() {
    Node* root = NULL;
    root = insert(root,9);
    root = insert(root,6);
    root = insert(root,4);
    root = insert(root,14);
    root = insert(root,12);
    root = insert(root,5);
    root = insert(root,10);
    // cout << "Binary tree created Successfully" << endl;
    // cout << "Inorder traversal of the tree: ";
    // display(root);
    // cout << endl
    // cout<< endl;
    cout<<"BST created successfully!"<<endl;
    display(root);

    return 0;
}