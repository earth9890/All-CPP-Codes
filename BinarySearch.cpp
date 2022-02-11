#include <bits/stdc++.h>
using namespace std;
int binsearch(int a[], int low, int high, int target)
{
    while (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == target)
        {
            return mid;
        }
        if (target < a[mid])
        // if (a[mid] > target)
        {
            return binsearch(a, low, mid - 1, target);
        }
        else
        {
            return binsearch(a, mid + 1, high, target);
        }
    }
    return -1;
}
int main()

{
    int arr[] = {10, 40, 505, 1000};
    int low = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int high = n - 1;
    int target = 505;
    int result = binsearch(arr, 0, high, target);
    if (result == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found At Index " << result << endl;
    }
    return 0;
}
