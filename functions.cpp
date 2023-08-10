#include<iostream>
#include<math.h>
using namespace std;

int power(int a, int b){
    int ans = 1;
    ans = pow(a, b);
    return ans;
}

int main() {
    int a,b;
    cin>>a>>b;
    int answer;
    answer = power(a,b);
    cout<<answer;
    
    return 0;
}