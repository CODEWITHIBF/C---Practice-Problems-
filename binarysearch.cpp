#include <iostream>
using namespace std;

int mid(int array[], int size)
{
    int mid = size / 2;
    return mid;
}

int check(int arr[], int size, int key)
{
    int number = mid(arr, size);

    if (key == arr[number])
    {
        return number;
    }
    else if (arr[number] < key)
    {
        for (int i = number; i <= size; i++)
        {
            if (arr[i] == key)
            {
                number = i;
                return number;
            }
        }
    }

    else if (arr[number] > key)
    {
        for (int i = 0; i <= number; i++)
        {
            if (arr[i] == key)
            {
                number = i;
                return number;
            }
        }
    }
}

int main()
{

    int arr[] = {10, 11, 12, 13, 15, 17, 19, 21, 22, 23, 25, 27, 29, 31, 33, 36, 37, 38, 39, 40, 41, 42, 43, 44, 55, 46, 47, 48, 49, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    cout << check(arr, n, 38);

    return 0;
}