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
        int n, m, k;
        cin >> n >> m >> k;
        unordered_set<int> s1;
        unordered_set<int> s2;
        unordered_set<int> com;
        int k1 = 0;
        int k2 = 0;
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp >= 1 && temp <= k)
                s1.insert((temp));
        }
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            if (temp >= 1 && temp <= k)
                s2.insert((temp));
            if (s1.find(temp) != s1.end())
            {
                com.insert(temp);
            }
        }
        for (int i = 1; i <= k; i++)
        {
            if (com.find(i) == com.end() && s1.find(i) != s1.end())
            {
                k1++;
            }
            else if (com.find(i) == com.end() && s2.find(i) != s2.end())
            {
                k2++;
            }
            else if (com.find(i) != com.end())
            {
                c++;
            }
        }
        if (k1 + k2 + c == k)
        {
            if (k1 <= k / 2 && k2 <= k / 2 && (k / 2 - k1) + (k / 2 - k2) == c)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
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