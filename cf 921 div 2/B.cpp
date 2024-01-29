#include <iostream>
#include <string>
#include <map>

using namespace std;

void VaibhavProcessInput(string &temp, int k, string &s)
{
    for (auto &e : temp)
    {
        if (k > (int)e - 'a')
        {
            s.push_back(e);
        }
    }
}

void VaibhavPrintAllA(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << 'a' << endl;
    }
}

void VaibhavBuildString(string &temp, int k, int n, string &ans)
{
    map<char, int> charCount;
    for (auto &x : temp)
    {
        charCount[x]++;
        if (charCount.size() == k)
        {
            ans.push_back(x);
            charCount.clear();
        }
    }
}

void VaibhavPrintResult(const string &ans, int n)
{
    if (ans.size() >= n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;

        if (ans.empty())
        {
            VaibhavPrintAllA(n);
        }
        else
        {
            while (ans.size() < n)
            {
                ans.push_back(ans[ans.size() - 1]);
            }
            cout << ans << endl;
        }
    }
}

void VaibhavSolveTestCase()
{
    int n, k, m, cnt = 0;
    string temp, s, ans;
    cin >> n >> k >> m >> temp;

    VaibhavProcessInput(temp, k, s);

    if (s.empty())
    {
        VaibhavPrintResult(ans, n);
        return;
    }

    VaibhavBuildString(s, k, n, ans);

    VaibhavPrintResult(ans, n);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        VaibhavSolveTestCase();
    }

    return 0;
}
