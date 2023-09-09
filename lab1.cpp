#include <iostream>
using namespace std;
int count = 0;
void BubbleSort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            count += 8;
        }
        count += 4;
    }
}
int main()
{
    int a[9] = {200, 332, 133, 266, 45, 47, 99, 12, 27};
    cout << "Before sorting: \n";
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    BubbleSort(a, 9);
    cout << "After sorting: \n";
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\nNo. of Steps required : " << count;
    return 0;
}