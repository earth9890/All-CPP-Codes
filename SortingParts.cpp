#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{

    ll n;
    cin >> n;
    ll max = 0;
    ll min = INT_MIN;
    vector<ll> v;
    vector<ll> xv;
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        v.push_back(y);
        xv.push_back(y);
    }
    sort(xv.begin(), xv.end());
    if (v == xv)
    {
        cout << "NO" << endl;
    }
    else if (v[0] >= v[n - 1])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int32_t main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}