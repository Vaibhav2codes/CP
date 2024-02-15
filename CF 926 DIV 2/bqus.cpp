#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void func(int a)
{
    int temp = a + 2 + a * a;
}
int func2(int b)
{
    int temp = b + b + b + 2 * b;
    return temp;
}
int main()
{
    func(3);
    func(5);
    func(3);
    func(3);
    int vaibhavinteger2 = func2(5);
    func(3);
    int vaibhavinteger3 = func2(5);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 4 * n - 2)
        {
            cout << n * 2 << endl;
        }
        else if (k % 2 != 0)
        {
            cout << k / 2 + 1 << endl;
        }
        else
        {
            cout << k / 2 << endl;
        }
    }
    return 0;
}