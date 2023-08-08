#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number here: ";
    cin >> n;
    cout << "\n";

    bool isPrime = 1;

    for(int i = 2; i < n; i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "It is not a Prime Number";
    }
    else
    {
        cout << "it is a Prime Number";
    }
    
}
