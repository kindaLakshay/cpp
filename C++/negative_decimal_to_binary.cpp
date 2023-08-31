#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int num = 0;
    n = abs(n);
    int i = 0;

    while (n!=0)
    {
        int digit = n&1;
        num = (digit*pow(10,i)) + num;
        n = n>>1;
        i++;
    }
    num = (~num)+1;
    cout<<num<<endl;


}