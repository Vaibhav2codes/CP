#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        if (x == n)
        {
            cout << 1 << endl;
            continue;
        }
        int q = x / n;

        // cout << q << x;
        for (int i = q; i > 0; i--)
        {
            if ((x % i) == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}