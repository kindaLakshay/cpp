// insert a number in a particular position of a single linked list
#include <iostream>

using namespace std;
struct link {
    int data;
    struct link * next;
};
struct link * start = NULL;
struct link * current;
struct link * node;
int n;
void create() {
    cout << "How many nodes u want to create ";
    cin >> n;
    cout << "Enter all elements ";
    for (int i = 0; i < n; i++) {
        node = (struct link * ) malloc(sizeof(struct link));
        cin >> node -> data;
        node -> next = NULL;
        if (start == NULL) {
            start = node;
            current = node;
        } else {
            current -> next = node;
            current = node;
        }
    }
}

void insert() {
    int loc = 0;
    node = (struct link *)malloc(sizeof(struct link));
    cout<<"enter the number and location ";
    cin>>nide->data;
    cin>>locl
    struct link *ptr->start;
    current = ptr-> next;
    for(int i = 1; i<=loc-2;i++){
        ptr = ptr->next;
        current = current -> next;
    }
    ptr =            

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