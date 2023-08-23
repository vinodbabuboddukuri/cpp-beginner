#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int n = str.length();
    int start = 0, end = n - 1;

    while (start < end)
    {
        if (isdigit(str[start]))
        {
            while (start < end && !isdigit(str[end]))
            {
                end--;
            }
            if (start < end)
            {
                swap(str[start], str[end]);
                start++;
                end--;
            }
        }
        else
        {
            start++;
        }
    }

    cout << str << endl;

    return 0;
}
