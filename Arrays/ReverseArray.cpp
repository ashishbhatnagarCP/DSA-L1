#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{

    int arr[] = {3, 5, 4, 2, 6, 7};
    reverseArray(arr, 6);

    for (int x : arr)
    {
        cout << x << endl;
    }
}