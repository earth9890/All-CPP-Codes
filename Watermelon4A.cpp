#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w >= 1 && w <= 100)
    {
        if (w % 2 != 0 || w <= 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
