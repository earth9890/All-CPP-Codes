#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        /*
            if (n < x)
            {
                int res = (x - n - 1);
                cout << abs(res) << endl;
            }
            else if (n > x)
            {
                cout << x << endl;
            }
        } */
        if (x <= n)
        {
            cout << x << endl;
        }
        else
        {
            while (x > n)
            {
                x = x - n - 1;
            }
            cout << x << endl;
        }
    }
    return 0;
}