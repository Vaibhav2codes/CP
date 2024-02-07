#include <iostream>
#include <climits>
using namespace std;

long long minCharges(int n, int a[], long long dp[][101])
{
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = LLONG_MAX;
        }

    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i - a[i - 1] >= 1)
            {
                dp[i][j] = min(dp[i][j], dp[i - a[i - 1]][j - 1] + 1);
            }
            if (i + a[i - 1] <= n)
            {
                dp[i][j] = min(dp[i][j], dp[i + a[i - 1]][j - 1] + 1);
            }
        }
    }

    long long min_charges = LLONG_MAX;
    for (int j = 0; j <= n; j++)
    {
        min_charges = min(min_charges, dp[n][j]);
    }

    return min_charges;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int a[101] = {0};
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        long long dp[101][101];
        cout << minCharges(n, a, dp) << endl;
    }

    return 0;
}
