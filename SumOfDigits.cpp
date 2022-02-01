#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, sum, N, remainder;
    cin >> T;
    while (T--)
    {
        sum = 0;
        cin >> N;
        while (N != 0)
        {
            sum = sum + N % 10;
            N = N / 10;
        }
        cout << sum << endl;
    }
    return 0;
}