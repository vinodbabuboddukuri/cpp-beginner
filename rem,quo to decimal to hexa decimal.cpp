#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, d;
    cin >> n >> d;

    string res = "";

    while (n > 0) {
        int N = n % d;
        if (N < 10)
            res = char('0' + N) + res;
        else
            res = char('A' + (N - 10)) + res;

        n = n / d;
    }

    cout << res << endl;

    return 0;
}
