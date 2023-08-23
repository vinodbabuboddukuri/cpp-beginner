#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

long long calculateDistinctPasswords(int n, int k) {
    long long total = 1;
    for (int i = 0; i < n; i++) {
        total = (total * k) % MOD;
        k--;
    }
    return total;
}

int main() {
    int t;
    std::cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        cout << calculateDistinctPasswords(n, k) << std::endl;
    }
    return 0;
}