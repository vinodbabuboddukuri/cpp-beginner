#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> v;
    
    //spliting the string and pushing back the values into the vector
    for (char digit : s) {
        if (isdigit(digit)) {
            v.push_back(digit);
        }
    }
	sort(v.rbegin(),v.rend());//descending order (for ascending remove r)
    //created a string to combine the values into single string from the vector
      string sortedString;
    for (char digit : v) {
        sortedString += digit;
    }

    cout<< sortedString << endl;
    
    
    return 0;
}
