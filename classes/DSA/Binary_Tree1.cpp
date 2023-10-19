#include <iostream>
using namespace std;
struct Node
{
    char data;
    Node *left;
    Node *right;
};
Node *create(char val)
{
    Node *newnode = new Node;
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void display(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data;
    display(root->left);
    display(root->right);
}
int main()
{
    Node *root = create('A');
    root->left = create('B');
    root->left->left = create('D');
    root->right = create('C');
    root->right->left = create('E');
    root->right->left->left = create('G');
    root->right->right = create('F');
    cout << "Binary tree created successfully !" << endl;
    cout << "Preorder traversal is: ";
    display(root);
    return 0;
}