#include <bits/stdc++.h>

using namespace std;

void processInput(int &n, vector<int> &a, vector<int> &b)
{
    for (int i = 0; i < n + n; i++)
    {
        cin >> (i < n ? a[i] : b[a[i - n]]);
    }
}

void printNonZeroValues(const vector<int> &v)
{
    for (auto it : v)
    {
        if (it != 0)
        {
            cout << it << ' ';
        }
    }
    cout << '\n';
}

int main()
{

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);

        processInput(n, a, b);

        sort(a.begin(), a.end());

        printNonZeroValues(a);
        printNonZeroValues(b);
    }

    return 0;
}
