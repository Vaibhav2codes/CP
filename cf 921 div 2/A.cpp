#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void makesvaibhav(int k, string &s)
{
    for (int i = 0; i < k; i++)
    {
        s += 'a' + i;
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // bool odd = checkodd(n, k);

        string s = "";
        makesvaibhav(k, s);

        for (int j = 0; j < n; j++)
        {
            cout << s;
        }

        cout << endl;
    }

    return 0;
}
