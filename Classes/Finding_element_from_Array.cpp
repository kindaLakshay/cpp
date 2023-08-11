#include <iostream>

using namespace std;

int main(){
    int n, minimum, temp;
    cout<<"Enter the size of the array: ";
    cin >>n;
    int a[n];
    cout<<endl<<"Enter the values to be stored in the array -:"<<endl;
    for(int i{0}; i < n; i++){
        cin>>a[i];
    }
    cout<<endl<<"Sorted array:";
    for(int i = 0; i < n; i++){
        minimum = i;
        for(int j = i+1; j < n; j++){
            if(a[minimum] > a[j]){
                    minimum = j;
            }
        }
        if(minimum != i){
            temp = a[minimum];
            a[minimum] = a[i];
            a[i] = temp;
        }
    }
    for(int i : a){
        cout<<" "<<i;
    }
return 0;}