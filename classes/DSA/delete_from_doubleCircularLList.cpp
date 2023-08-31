// WAP to delete a number from a double circular linked list from a specific position
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
int n;

void delete1(){
    struct link* ptr=start;
    current=ptr->next;
    int loc;
    cout << "Enter location to be deleted :";
    cin >>loc;
    if(loc==1){
        start=current;
        start->prev=node;
        node->next=start;
    }else if(loc<1|| loc>n){
        cout<<"Invalid Location"<<endl;
    }else{
    for(int i=1;i<=loc-2;i++){
        ptr=ptr->next;
        current=current->next;
    }
    ptr->next=current->next;
    current->next->prev=ptr;
}
}

void display(){
    struct link *ptr = start;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    } while(ptr!=start);
}


int main() {

    create();
    display();
    create();
    return 0;
}