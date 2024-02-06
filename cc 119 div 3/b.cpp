#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int temp;
        int ans = 1e8;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp >= k)
            {
                ans = min(ans, temp % k);
            }
        }
        if (ans != 1e8)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}