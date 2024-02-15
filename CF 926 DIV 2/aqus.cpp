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
        int n;
        cin >> n;
        vector<long long int> v(n);
        // long long int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long int sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum = sum + (v[i] - v[i - 1]);
        }
        cout << sum << endl;
    }
    return 0;
}