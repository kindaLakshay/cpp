#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Input the size and elements of the first array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the size and elements of the second array
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    // Merge the arrays into a new array arr3
    int arr3[n + m];
    int count = 0;
    for (int i = 0; i < m; i++) {
        arr3[count] = arr2[i];
        count++;
    }
        for (int i = 0; i < n; i++) {
        arr3[i] = arr[i];
        count++;
    }


    // Sort the merged array arr3
    // sort(arr3, arr3 + count);

    // Print the merged array while removing duplicates
    cout << arr3[0] << " ";
    for (int i = 1; i < count; i++) {
        if (arr3[i] != arr3[i - 1]) {
            cout << arr3[i] << " ";
        }
    }

    return 0;
}
