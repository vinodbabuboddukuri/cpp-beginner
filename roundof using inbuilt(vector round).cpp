#include <bits/stdc++.h>
using namespace std;

int main() 
{
// Try out your code here
    int n,t;cin>>n>>t;
  	int fi = round(static_cast<double>(n) / t);
  	cout<<fi<<" Days"<<endl;
  	
    return 0;
}



//vector addtion and round of to the target value
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
  	int k;cin >> k;
    double result = ceil(static_cast<double>(sum) / k);
    cout << result << endl;
    return 0;
}
