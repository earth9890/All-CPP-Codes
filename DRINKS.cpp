#include <bits/stdc++.h>
using namespace std;
int n, y, x;
main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> x;
        y = y + x;
    }
    cout << (double)y / n;
}
