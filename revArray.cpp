#include <iostream>
using namespace std;
void rev(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    swap(arr[s], arr[e]);
    rev(arr, ++s, --e);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    rev(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
