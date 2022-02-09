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
        int chat = x / 2;
        if (chat > y)
        {
            cout << y << endl;
        }
        else if (chat < y)
        {
            cout << chat << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}