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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x = max(a[i], b[i]);
            int y = min(a[i], b[i]);
            a[i] = x, b[i] = y;
        }
        cout << *max_element(a, a + n) * (*max_element(b, b + n));
        cout << endl;
    }
    return 0;
}