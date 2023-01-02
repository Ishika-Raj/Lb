#include <iostream>
using namespace std;
struct Pair
{
    int min;
    int max;
};
Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;

    if (n == 1)
    {
        minmax.max = minmax.min = arr[0];
        return minmax;
    }
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
            minmax.max = arr[i];
        else if (arr[i] < minmax.min)
            minmax.min = arr[i];
    }
    return minmax;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    struct Pair minmax = getMinMax(arr, n);
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
}
