#include <bits/stdc++.h>
using namespace std;

void processQueriesAndPrintLengths(int stringLength, int queryCount, string inputString)
{
    vector<char> queryChars(queryCount);
    for (int i = 0; i < queryCount; i++)
        cin >> queryChars[i];

    int maxLen = 0;
    char currentChar = inputString[0];
    int currentLen = 0;

    for (int i = 0; i < stringLength; i++)
    {
        if (inputString[i] == currentChar)
        {
            currentLen++;
        }
        else
        {
            maxLen = max(maxLen, currentLen);
            currentLen = 1;
            currentChar = inputString[i];
        }
    }
    maxLen = max(maxLen, currentLen);

    cout << maxLen << " ";

    char lastChar = inputString[stringLength - 1];

    for (int i = 0; i < queryCount; i++)
    {
        if (lastChar == queryChars[i])
        {
            currentLen++;
        }
        else
        {
            currentLen = 1;
            lastChar = queryChars[i];
        }
        maxLen = max(maxLen, currentLen);
        cout << maxLen << " ";
    }

    cout << endl;
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int stringLength, queryCount;
        cin >> stringLength >> queryCount;

        string inputString;
        cin >> inputString;

        processQueriesAndPrintLengths(stringLength, queryCount, inputString);
    }

    return 0;
}
