#include<iostream>
using namespace std;



int main() {

    int a = 100;
    int *ptr = &a; 
    cout<<"address: " << &a <<endl;
    cout<<"variable: " << a << endl;
    cout<<"pointer: " << ptr << endl;
    
    return 0;
}
