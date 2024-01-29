
#include <bits/stdc++.h>

using namespace std;

string printGrouped(string s)
{
    unordered_map<char, int> nishtha;

    for (char i : s)
    {
        nishtha[i]++;
    }

    string r = "";
    for (char i : s)
    {
        while (nishtha[i] > 0)
        {
            r += i;
            nishtha[i]--;
        }
    }

    return r;
}

int main()
{
    string str;
    getline(cin, str);

    printGrouped(str);

    return 0;
}