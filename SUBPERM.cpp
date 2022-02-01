#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << "1";
        }
        else if (k == 1)
        {
            cout << "-1";
        }
        else
        {
            int j;
            for (j = k; j <= n; j++)
                cout << j << " ";
            for (j = 1; j < k; j++)
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}