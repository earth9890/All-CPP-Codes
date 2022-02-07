#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, m = 0;
        cin >> n >> x;
        int a[n], b[n], i, s = 0, sum = 0;
        for (i = 0; i < n; i++)
            cin >> a[i], s = s + a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        for (i = 0; i < x; i++)
        {
            if (a[i] < b[i])
                s = s + b[i] - a[i];
        }
        cout << s << "\n";
    }
    return 0;
}
