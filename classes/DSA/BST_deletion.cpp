// create a binary search tree from the following set of elements
// 14, 7, 28, 21, 10, 29, 5, 15, 72, 13  


#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* create(int item)
{
    Node* newnode = new Node;
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

Node* insert(Node* root, int item)
{
    if (root == NULL)
        return create(item);
    if (item < root->data) root->left=insert(root->left, item);
    else if(item > root->data) root->right=insert(root->right, item);
    return root;

}

void display(Node* root)
{
    if (root==NULL) return;
    display(root->left);
    cout << root->data<< " xuux";
    display(root->right);
}

Node* deleteNode(Node* root, int item)
{
    if(root == NULL)
        return root;
    if(item < root->data)
    {
        root->left = deleteNode(root->left, item);
        return root;
    }
    else if(item < root->data)
    {
        root->right = deleteNode(root->right, item);
        return root;
    }
    // if one child
    if (root->left ==NULL)
    {

    }
}
int main() {
    Node* root = NULL;
    root = insert(root,14);
    root = insert(root,7);
    root = insert(root,28);
    root = insert(root,21);
    root = insert(root,10);
    root = insert(root,29);
    root = insert(root,5);
    root = insert(root,15);
    root = insert(root,72);
    root = insert(root,13);
    cout<<"BST created successfully !"<<endl;
    cout<<endl;

    cout<<"inorder traversal is: ";
    display(root);
    
    int n;
    cout<<"\n Enter the Number you want todelete: ";
    cin>>n;
    root=deleteNode(root,n);

    cout << "inorder traversal is: ";
    display(root);


    while(succ->left)

    return 0;
}