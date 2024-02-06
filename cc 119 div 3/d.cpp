#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> odd;
        vector<int> even;
        vector<int> ans;
        int temp;
        for (int i = 0; i < n; i++)
        {
            temp = i + 1;
            if (k > 0)
            {
                ans.push_back(temp);
                k--;
                int start = temp;
            }
            else if (k == 0)
            {
                if (temp % 2 == 0)
                {
                    even.push_back(temp);
                }
                else
                {
                    odd.push_back(temp);
                }
            }
        }
        if (ans[ans.size() - 1] % 2 == 0)
        {
            for (int i = 0; i < even.size(); i++)
                ans.push_back(even[i]);
            for (int i = 0; i < odd.size(); i++)
                ans.push_back(odd[i]);
        }
        else
        {
            for (int i = 0; i < odd.size(); i++)
                ans.push_back(odd[i]);
            for (int i = 0; i < even.size(); i++)
                ans.push_back(even[i]);
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}