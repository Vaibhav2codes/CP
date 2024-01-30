#include <bits/stdc++.h>
using namespace std;
#define int long long

int x, y, z;
int Vaibhavsolve(int &x, int &y, int &z)
{
    if (x < y)
        swap(x, y);
    int result = x - y, count = 0, minimum = result;
    for (int i = 60; i >= 0; i--)
    {
        if (((y >> i) & 1) == 0 && ((x >> i) & 1) == 1 && count + (1ll << i) <= z)
        {
            if (result >= 2 * (1ll << i))
            {
                count += (1ll << i);
                result -= 2 * (1ll << i);
            }
            else
                minimum = min(minimum, 2 * (1ll << i) - result);
        }
    }
    return min(result, minimum);
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        // Vaibhavsolve(x,y,z);
        cout << Vaibhavsolve(x, y, z) << "\n";
    }
    return 0;
}
