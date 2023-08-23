#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin >> number;
    cout << "Enter a number: "<<number<<endl;
    int sum = 0;
    while (number > 0) {
        sum += number % 10;//add the last digit to the sum
        number /= 10;//removes the last digit
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}