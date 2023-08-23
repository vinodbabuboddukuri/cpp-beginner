#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    for (char digit : s) {
        if (isdigit(digit)) {
            count++;
        }
    }

    cout <<count <<endl;

    return 0;
}
