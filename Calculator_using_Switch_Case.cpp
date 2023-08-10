#include<iostream>
using namespace std;

int main() {
    
    int a;
    cout<<"Enter the value of A: ";
    cin>>a;
    
    int b;
    cout<<"Enter the value of B: ";
    cin>>b;

    cout<<"Enter + for Addition"<<endl;
    cout<<"Enter - for Subtraction"<<endl;
    cout<<"Enter * for Multiplication"<<endl;
    cout<<"Enter / for Division :";
    char op;
    cin>>op;

    switch (op) {
    case '+': cout<<"the answer is: "<<a+b;
        break;
    case '-': cout<<"the answer is: "<<a-b;
        break;
    case '*': cout<<"the answer is: "<<a*b;
        break; 
    case '/': cout<<"the answer is: "<<a/b;

    default:
        cout<<"Please enter a valid operation";
        break;
    }

    return 0;
}