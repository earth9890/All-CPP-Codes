#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int c = x / y;

        if (x < y)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}