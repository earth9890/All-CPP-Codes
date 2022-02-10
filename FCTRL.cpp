#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, conut = 0;
    cin >> t;
    while (t--)

    {
        cin >> n;
        while (n % 10 == 0)
        {
            conut++;
        }
        cout << conut << endl;
    }
    return 0;
}