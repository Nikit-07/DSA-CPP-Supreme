#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // if element found
        if (target == arr[mid])
        {
            // return target index
            return mid;
        }

        else if (target > arr[mid])
        {
            // go to right
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // go to left
            end = mid - 1;
        }

        // dont forget to update mid each time
        mid = start + (end - start) / 2;
    }

    // if the target is not found then return an invalid index
    return -1;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = 9;
    int target = 90;

    int ans = binarySearch(arr, size, target);

    if (ans == -1)
    {
        cout << "The target is not found";
    }
    else
    {
        cout << "The target is found at index: " << ans;
    }

    return 0;
}