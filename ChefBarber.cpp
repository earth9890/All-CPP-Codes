#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        if (n > 0)
        {
            cout << n * m << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}