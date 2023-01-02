#include <iostream>
using namespace std;
void rev(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[] = {1, -2, 5, -4, 8, -6, -8, -4};
    int n = 9;
    rev(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
