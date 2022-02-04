#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    if (t < 1 || t > 12)
    {
        return -1;
    }
    while (t--)
    {
        int n;
        cin >> n;
        float x = (0.143 * n);
        float y = x;
        x = pow(y, n);
        if (n > 15 || n < 4)
        {
            return -1;
        }
        if (x - floor(x) < 0.5)
        {
            cout << floor(x) << endl;
        }
        else
        {
            cout << floor(x) + 1 << endl;
        }
    }
    return 0;
}