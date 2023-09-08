#include<iostream>
using namespace std;

void push(int item);
void pop();
void display();
const int maxsize = 10;
int top = -1;
int stack[maxsize];

int main() {
    int choice;
    
    cout << "1 for push" << endl;
    cout << "2 for pop" << endl;
    cout << "3 for display" << endl;
    cout << "4 for exit" << endl;
    
    while (true) {
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int item;
                cout << "Enter the number to push: ";
                cin >> item;
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Enter the correct number" << endl;
        }
    }
    
    return 0;
}

void push(int item) {
    if (top == maxsize - 1)
        cout << "Stack overflow condition" << endl;
    else {
        top = top + 1;
        stack[top] = item;
    }
}

void pop() {
    if (top == -1)
        cout << "Stack underflow condition" << endl;
    else {
        cout << "Popped element: " << stack[top] << endl;
        top = top - 1;
    }
}

void display() {
    if (top == -1)
        cout << "Stack is empty" << endl;
    else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
            cout << stack[i] << " ";
        cout << endl;
    }
}
