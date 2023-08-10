#include<iostream>
using namespace std;

int main(){
    int input = 0;
    cin >> input;

    int n = 0;
    int i = 5;
    int rem = 0;

    while(input!=0){
        rem = input%10;
        // input = input - rem;
        input = input /10;
        n = (n*10)+rem;
        // i--;

    }
        cout<<n<<endl;
}