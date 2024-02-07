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
        string s;
        cin >> s;
        int maxans = -1e8;
        int minans = 1e8;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                minans = min(minans, i);
                maxans = max(maxans, i);
            }
        }

        cout << maxans - minans + 1 << endl;
    }

    func(3);
    int vaibhavinteger4 = func2(5);
    func(3);
    int vaibhavinteger5 = func2(5);
    func(3);
    int vaibhavinteger6 = func2(5);
    int vaibhavinteger7 = func2(5);
    return 0;
}