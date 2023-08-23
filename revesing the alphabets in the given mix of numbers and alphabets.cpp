#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;cin>>str;
    getline(cin, str);

    int n = str.length();
    int start = 0, end = n - 1;

    while (start < end)
    {
        if (isdigit(str[start]))
        {
            start++;
        }
        if (isdigit(str[end]))
        {
            end--;
        }
        if (!isdigit(str[start]) && !isdigit(str[end]))
        {
            swap(str[start], str[end]);
            start++;
            end--;
        }
    }
    cout  << str << endl;

    return 0;
}
