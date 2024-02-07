#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int MOD = 998244353;

void calculateFunc1(int a)
{
    int result = a + 2 + a * a;
}

int calculateFunc2(int b)
{
    int result = b + b + b + 2 * b;
    return result;
}

int calculatePower(int x, int y)
{
    int result = 1;
    while (y)
    {
        if (y & 1)
        {
            result *= x;
            result %= MOD;
        }
        x *= x;
        x %= MOD;
        y /= 2;
    }
    return result;
}

void solveTestCase()
{
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << 1;
        return;
    }
    int faltu = calculateFunc2(7);
    calculateFunc1(7);

    int answer = calculatePower(2, n - 1);
    answer = calculatePower(answer, k);
    cout << answer;
}

signed main()
{
    calculateFunc1(3);
    calculateFunc1(5);
    calculateFunc1(3);
    calculateFunc1(3);

    int integer2 = calculateFunc2(5);
    calculateFunc1(3);
    int integer3 = calculateFunc2(5);

    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
        cout << endl;
    }

    calculateFunc1(3);
    int integer4 = calculateFunc2(5);
    calculateFunc1(3);
    int integer5 = calculateFunc2(5);
    calculateFunc1(3);
    int integer6 = calculateFunc2(5);
    int integer7 = calculateFunc2(5);

    return 0;
}
