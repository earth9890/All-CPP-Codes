#include <iostream>
using namespace std;
int main()
{
    int T, n, x, y, i;
    cin >> T;

    while (T--)
    {
        cin >> n >> x >> y;
        int A[n];
        int B[n];
        for (i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (i = 0; i < n; i++)
        {

            cin >> B[i];
        }
        int count = 0;
        for (i = 0; i < n; i++)
        {
            if (A[i] + x == B[i] || A[i] + y == B[i])
            {
                continue;
            }
            else
            {
                count++;

                break;
            }
        }
        if (count > 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}