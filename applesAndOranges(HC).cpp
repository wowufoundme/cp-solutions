#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int countApples = 0, countOranges = 0;

    for (auto elem : apples) { 
        elem = elem + a;
        if (elem >= s && elem <= t)
            countApples++;
    }
    for (auto elem : oranges){
        elem = elem + b;
        if (elem >= s && elem <= t)
            countOranges++;
    }
    cout<<countApples<<endl<<countOranges;
}

int main() {
    int s = 7, t = 10, a = 4, b = 12;
    vector<int> apples = {2, 3, -4};
    vector<int> oranges = {3, -2, -4};
    countApplesAndOranges(s, t, a, b, apples, oranges);
    return 0;
}