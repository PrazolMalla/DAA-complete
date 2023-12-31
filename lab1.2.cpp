#include <iostream>
using namespace std;
int count = 0;

void InsertionSort(int A[], int n)
{
    int key;
    int j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i];

        for (j = i - 1; A[j] > key && j >= 0; j--)
        {
            A[j + 1] = A[j];
            count += 7;
        }
        A[j + 1] = key;
        count += 7;
    }
}

int main()
{
    int a[] = {200, 332, 133, 266, 45, 47, 99, 12, 27};
    int n = sizeof(a) / sizeof(int);

    cout << "Before sorting :\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    InsertionSort(a, n);

    cout << "\nAfter sorting :\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    cout << "\nRequired Number of steps for " << n << "sized Data: " << count;
    return 0;
}