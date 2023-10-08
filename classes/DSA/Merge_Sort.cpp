#include <iostream>
using namespace std;
int i, j, pivot;

int partition(int a[], int low, int high)
{
    pivot = a[low];
    i = low;
    j = high;

    while (i < j)
    {
        do
        {
            i++;
        } while (a[i] < pivot);

        do
        {
            j--;
        } while (a[j] > pivot);

        if (i < j)
            swap(a[i], a[j]);
    }

    swap(a[low], a[j]);
    return j;
}

void quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        int j = partition(a, low, high);
        quicksort(a, low, j);
        quicksort(a, j + 1, high);
    }
}

int main()
{
    int x;
    cout << "Enter range ";
    cin >> x;
    int n = x + 1;
    int a[n];

    cout << "Enter elements " << endl;
    for (i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    a[i] = 999;

    quicksort(a, 0, n - 1);

    cout << "Sorted elements " << endl;
    for (i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

