#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string c;
    cin >> c;
    for (int i = 0; i < c.size(); i++)
    {
        if (i == 0)
        {
            if (c[0] >= 'a' && c[0] <= 'z')
            {
                c[i] = c[i] - 32;
                cout << c;
            }
            else
            {
                cout << c;
            }
        }
    }
    return 0;
}