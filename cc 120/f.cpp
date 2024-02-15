#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
void func(int a)
{
    int temp = a + 2 + a * a;
}
int func2(int b)
{
    int temp = b + b + b + 2 * b;
    return temp;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k > ((n - 1) * (n - 1)) || k < (((n - 1) * n) / 2))
        {
            cout << -1 << endl;
        }
        else if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            vector<int> a(n, 0);
            a[0] = 1;
            vector<int> b(n, 0);
            for (int i = 1; i < (n); i++)
            {
                b[i] = i;
                k -= (i);
            }
            int l = n - 2;
            while (k)
            {
                int f = n - 1 - b[l];
                f = min(f, k);
                k -= f;
                b[l] += f;
                l--;
            }
            int f = 0;
            a[0] = 1;
            set<int> s, ss;
            for (int i = 1; i <= n; i++)
            {
                s.insert(i);
                ss.insert(1 + b[i - 1]);
            }
            ss.erase(0);
            while (!ss.empty())
            {
                s.erase(*ss.begin());
                ss.erase(ss.begin());
            }
            if (s.find(1) != s.end())
            {
                s.erase(1);
            }
            for (int i = 1; i < n; i++)
            {
                if (f == b[i])
                {
                    a[i] = (*s.begin());
                    s.erase(s.begin());
                }
                else
                {
                    f = b[i];
                    a[i] = 1 + f;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}