#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[8] = {12, 15, 18, 21, 25, 30, 34, 41};
    int age;

    cout << "Enter age to search: ";
    cin >> age;

    int result = binarySearch(arr, 8, age);

    if (result == -1)
        cout << age << " not found";
    else
        cout << age << " found at index " << result;

    return 0;
}
