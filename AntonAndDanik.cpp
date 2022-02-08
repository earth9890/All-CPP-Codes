#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (count(s.begin(), s.end(), 'A') > count(s.begin(), s.end(), 'D'))
    {
        cout << "Anton" << endl;
    }
    else if (count(s.begin(), s.end(), 'A') == count(s.begin(), s.end(), 'D'))
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}
