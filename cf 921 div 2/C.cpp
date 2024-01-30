#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, m, cnt = 0;
    string temp, s, ans;
    cin >> n >> k >> m >> temp;

    for (auto &e : temp)
    {
        if (k > (int)e - 97)
        {
            s.push_back(e);
        }
    }
    if (s.empty())
    {
        cout << "NO" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 'a' << endl;
        }
        return;
    }

    map<char, int> mp;
    for (auto &x : s)
    {
        mp[x]++;
        if (mp.size() == k)
        {
            ans.push_back(x);
            cnt++;
            mp.clear();
        }
    }
    if (cnt >= n)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO\n";

    if (mp.empty())
    {
        while (ans.size() < n)
        {
            ans.push_back(s[s.size() - 1]);
        }

        cout << ans << endl;
        return;
    }

    char g;
    for (char c = 'a'; c < char(97 + k); c++)
    {
        if (mp[c] == 0)
        {
            g = c;
            break;
        }
    }

    while (ans.size() < n)
    {
        ans.push_back(g);
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
