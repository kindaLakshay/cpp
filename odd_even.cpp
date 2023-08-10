#include<iostream>
using namespace std;

// 1 -> even
// 2 -> odd

bool isEven(int a){
    //odd
    if (a&1) return 0;
    // even
    return 1;
    
}

int main() {
    
    int num;
    cin>>num;
    
    if(isEven(num)) cout<<"the number is even"<< endl;
    else cout<< "the number is odd"<<endl;
    
    return 0;
}