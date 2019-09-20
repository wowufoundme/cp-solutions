// Reverse Integer 

#include <bits/stdc++.h>

using namespace std;

int reverse(int x) {
    int n = x;
    vector<int> digits;
    while (n != 0) {
        digits.push_back(n%10);
        n = n / 10;
    }
    int total = 0, decimal = 1;
    reverse(digits.begin(), digits.end());
    for (auto &itr : digits) {
        total += itr * decimal;
        decimal *= 10;
    }
    return total;
}

int main() {
    cout<<reverse(486231236)<<endl;
    return 0;
}