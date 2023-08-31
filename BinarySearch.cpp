#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    int mid = (start+end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if (key>arr[mid]){
            start = start + 1;
        }
        else end = mid - 1;

        mid = (start+end)/2;
    }
    return -1;
}

int main() {
    
    int even[6] = {1,3,4,6,7,9};
    int odd[5] = {2,4,6,8,10};

    for(int i = 2; i <= 10; i = i+2){
    int index = BinarySearch(odd, 5, i);
    cout<<index<<endl;

    }
    
    return 0;
}