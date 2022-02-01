#include <iostream>
#include <algorithm>
using namespace std;
int main()

{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        string s;
        string p;
        cin >> n;
        cin >> s;
        if (s == "1" || s == "0" || s == "10" || s == "01")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}