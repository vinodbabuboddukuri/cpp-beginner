#include<bits/stdc++.h>
using namespace std;

bool isprime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (isprime(i)) {
            sum += arr[i];
        }
    }

    cout<< sum << endl;

    return 0;
}
