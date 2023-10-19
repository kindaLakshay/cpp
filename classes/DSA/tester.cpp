#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 123456789;
    int rev = 0;
    while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    cout << rev;
}