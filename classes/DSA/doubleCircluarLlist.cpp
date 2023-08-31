// wap to create a double circular linkedlist and display all the values;

#include<iostream>
using namespace std;

struct link{
    int data;
    struct link *next;
    struct link *prev;
};
struct link *start=NULL;
struct link *current;
struct link *node;

void create(){
    int n;
    cout<<"How many nodes u want to create ";
    cin>>n;
    cout<<"Enter all the elements ";
    for(int i=0; i<n; i++){
        node = (struct link *)malloc(sizeof(struct link));
        cin>>node->data;
        if(start==NULL){
            start = node;
            current = node;
            node->next = start;
            node->prev = start;
        }
        else{
            current->next = node;
            node->prev = current;
            node->next = start;
            start->prev = node;
            current = node;
        }
    }
}

void display(){
    struct link *ptr = start;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    } while(ptr!=start);
}

void insert(){
    node = (struct link *)malloc(sizeof(struct link));
    cout << "Enter the number ";
    cin>>node->data;
    cout<<"Enter the location : ";
    cin>>loc;
    struct link *ptr = start;
    current = ptr->next;
    for(int i = 1; i<= loc-2; i++){
        ptr = ptr -> next;
        current = current->next;
    }
    ptr->prev=ptr;
    node;

}

int main() {

    create();
    display();
    insert();

    return 0;
}