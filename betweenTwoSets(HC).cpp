#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    //int sol;
    vector<int> nos;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int start = *a.begin(), end = *b.begin();
    for (int i=start; i<=end; i++) {
        bool divisible = true, canDivide = true;
        for (auto it : a) {
            if ( i%it != 0 ) {
                divisible = false;
                break;
            }
        }
        for (auto it : b) {
            if ( it%i != 0 ) {
                canDivide = false;
                break;
            }
        }

        if (divisible && canDivide)
            nos.push_back(i);
    }
    return nos.size();
}

int main() {
    vector<int> a = {4, 2}, b = {32, 96, 16};
    cout<<getTotalX(a, b)<<endl;
    return 0;
}