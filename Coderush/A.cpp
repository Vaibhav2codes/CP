#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func(long long N)
{
    int cntTriplet = 0;

    for (int i = 1; i < N; i++)
    {

        if (N % i != 0)
        {

            cntTriplet += N / i;
        }
        else
        {

            cntTriplet += (N / i) - 1;
        }
    }
    return cntTriplet;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, l;
        cin >> l >> r;
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += func(i);
        }

        cout << sum << endl;
    }

    return 0;
}
