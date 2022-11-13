#include <iostream>
using namespace std;

void sortZeroOneTwo(int arr[], int n)
{
    int zero = 0;
    int one = 0;
    int two = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;

        else if (arr[i] == 1)
            one++;
        else if (arr[i] == 2)
            two++;
    }

    int i = 0;
    while (zero-- > 0)
    {
        arr[i] = 0;
        i++;
    }
    while (one-- > 0)
    {
        arr[i] = 1;
        i++;
    }
    while (two-- > 0)
    {
        arr[i] = 2;
        i++;
    }
}

int main()
{
    int arr[] = {0, 1, 1, 2, 2, 0};
    sortZeroOneTwo(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}