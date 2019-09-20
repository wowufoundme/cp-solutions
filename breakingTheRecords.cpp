#include <bits/stdc++.h>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    vector<int> solution;
    int min = INT_MAX, max = -1;
    int minCount = -1, maxCount = -1;
    for (auto it : scores) {
        if ( it < min ) {
            min = it;
            minCount++;
        }
        if ( it > max ) {
            max = it;
            maxCount++;
        }
    }
    solution.push_back(maxCount), solution.push_back(minCount);
    return solution;
}

int main() {
    vector<int> scores = {3, 4, 1, 36, 0, 28, 5, 15, 24, 42};
    vector<int> sol = breakingRecords(scores);
    cout<<sol[0]<<" "<<sol[1]<<endl;
    return 0;
}