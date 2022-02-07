#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i, f1 = 0, f2 = 1;
    cout << f1 << f2 << endl;

    for (i = 2; i < 10; i++)
    {
        int temp = f1 + f2;
        cout << temp << endl;
        f1 = f2;
        f2 = temp;
    }
    return 0;
}