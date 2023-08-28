// wap to accept the value of m  and m and delete n nodes after m nodes in single ll

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

void delete1(){
    int m,n;
    cout<<"give me the value of m and n";
    cin>>m;
    cin>>n;
    struct link *ptr=start;
    current = ptr->next;
    for(int i = 0; i<m; i++){
        ptr = ptr->next;
        current = current->next;
    }
    for(int i=1; i<n; i++){
        current = current->next;
    }
    ptr->next=current->next;
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
    delete1();
    display();
    return 0;
}