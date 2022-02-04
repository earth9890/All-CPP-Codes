#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        float res = (0.147 * n);
        float ans = pow(res, n);
        cout << ans;
    }
}