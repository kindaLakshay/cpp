#include <iostream>
using namespace std;

int main(){
    int n, temp;
    cout<<"Enter the size of the array: ";
    cin >>n;
    int a[n];
    cout <<endl<<"Enter the values to be stored in the array -:"<<endl;
    for(int i{0}; i < n; i++){
        cin>>a[i];
    }
    cout<<endl<<"Sorted array:";
    for(int i{0}; i < n; i++){
        for(int j{0}; j < n-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i : a){
        cout<<" "<<i;
    }
    cout<<endl;
return 0;

}