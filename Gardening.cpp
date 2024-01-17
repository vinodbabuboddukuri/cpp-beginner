#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> v(n);
    for (int i = 0; i <=n; i++) {
        cin >> v[i]; 
    }
    int max = v[0];
    int sum = v[0];
    for (int i = 1; i <=n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
        sum += v[i]; 
    }
    int result = max * n; 
    int diff = result-sum-1; 
    cout << diff << endl;
    return 0;
}
