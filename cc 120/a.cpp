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
        if (n < 127)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
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