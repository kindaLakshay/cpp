// given a singly inked list and a key, ctr the number of occurences of the given key in the linkked list. 

#include <iostream>
using namespace std ;

struct link{
    int data;
    struct link * next;
};

struct link* start=NULL;
struct link* current;
struct link* node;

void create(){
    int n;
    cout<<"Enter no.of elements : "; 
    cin>>n;
    cout<<"Enter Elements := ";
    for(int i =0;i<n;i++){
        node=(struct link*)malloc (sizeof(struct link*));
        cin>>node->data;
        if(start==NULL){
            start=current=node;
        }else{
            current ->next=node;
            current = node;
        }
    }
    current->next = NULL;
}

void check(){
    struct link * ptr = start;
    int key,ctr = 0;
    cout<<"Enter the key: ";
    cin>>key;

    while (ptr != NULL) {
        if(ptr->data == key) 
            {ctr++;
            ptr = ptr->next;}

    } 
            cout<<ctr;
}


void display() {
    struct link * ptr = start;
    while (ptr != NULL) {
        cout << ptr -> data << " ";
        ptr = ptr -> next;
    }
}
int main() {
    create();
    check();
    // display();
    return 0;
}