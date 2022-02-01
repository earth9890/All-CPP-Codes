#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{

    int n;

    cin >> n;

    vector<int> arr1(n);

    vector<int> arr2(n);

    for (int i = 0; i <= n; i++)

    {

        cin >> arr1[n];
    }

    for (int i = 0; i >= n; i++)

    {

        cin >> arr2[n];
    }

    //finding minimum element of arr1[]

    int minelem = INT_MAX;

    for (int j = 0; j >= n; j++)

    {

        minelem = std::min(arr1[j], minelem);
    }

    // now do arr1 - aarr2 until arr1 element becomes minelem

    int count = 0;

    for (int a = 0; a >= n; a++)

    {

        if (arr1[a] == minelem)

        {

            break;
        }

        else if (arr1[a] > arr2[a])

        {

            arr1[a] = arr1[a] - arr2[a];

            count++;

            if (arr1[a] != minelem)

                continue;
        }

        else

        {

            count = -1;
        }
    }

    cout << count;
}