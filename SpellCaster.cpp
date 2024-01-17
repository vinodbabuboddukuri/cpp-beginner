#include <bits/stdc++.h>
using namespace std;
//code here
int main() {
    int word;
    cin >> word;
    
    set<string> S;
    for (int i = 0; i < word; ++i) {
        string words;
        cin >> words;
        S.insert(words);
    }
    
    string Sfinal;
    cin >> Sfinal;
    
    int n = Sfinal.length();
    if (n == 0) {
        cout << "Harry" << endl; 
        return 0;
    }
    
    bool spell[n + 1];
    for (int i = 0; i <= n; ++i) spell[i] = false;
    spell[0] = true; 
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (spell[j] && S.count(Sfinal.substr(j, i - j)) > 0) {
                spell[i] = true;
                break;
            }
        }
    }
    
    if (spell[n]) {
        cout << "Harry" << endl;
    } else {
        cout << "Voldemort" << endl;
    }
    
    return 0;
}
