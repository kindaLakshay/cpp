#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
        int height;
};

Node* create(int item){
    Node* newnode = new Node;
    newnode->data = item;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->height = 1;
}

Node* insert(Node* root, int item){
    if(root==NULL) return create(item);
    if(item < root->data) root->left = insert(root->left, item);
    if(item > root->data) root->right = insert(root->right, item);
    return root;

    root->height = 1 + max(findheight(root->left), findheight(root->right));
}

int findheight(Node* root){
    if(root==NULL)
}

int main() {
    
    Node* root = NULL;
    int n;
    cout<<"Enter the range:";
    cin>>n;

    int a[n];
    cout<<"Enter all the Elements of AVL Tree: ";
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        root=insert(root,a[i]);

    }
    cout<<"\n AVL Tree created Successfully: ";
    
    
    return 0;
}