#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// bool checkodd(int n, int k)
// {
//     if (n % 2 && k % 2)
//     {
//         return true;
//     }
//     else
//         return false;
// }
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
