#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    switch (n % 2) {
        case 0:
            cout <<"EVEN"<< endl;
            break;
        case 1:
            cout <<"ODD"<< endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
    return 0;
}