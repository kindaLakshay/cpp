/**************************************************************************** 
Min heap
*******************************************************************************/
#include <iostream>
using namespace std;
void maxheap(int *a, int k, int n)
{
    int val = a[k];
    int j = 2 * k;
    while (j <= n)
    {
        if (a[j + 1] > a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
        if (val > a[j])
            break;
        if (val < a[j])
            j = j + 1;
    }
    a[j / 2] = val;
    return;
}
void build_heap(int *a, int n)
{
    {
        a[j / 2] = a[j];
        j = 2 * j;

        int k;
        for (k = n / 2; k >= 1; k--)
        {
            maxheap(a, k, n);
        }
    }
    int main()
    {
        int n, a[30];
        cout << "Enter the range: ";
        cin >> n;
        cout << "\nEnter all the elements :";
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        build_heap(a, n);
        cout << "\nMax heap is: ";
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        return 0;
    }
}