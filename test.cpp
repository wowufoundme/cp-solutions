#include <bits/stdc++.h>

using namespace std;

vector<int> uneek(vector<int> vec) {
    sort( vec.begin(), vec.end() );
    vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
    return vec;
}

int sockProblem(int n, vector<int> arr) {
    map<int, int> count;
    vector<int> arr_copy = arr;
    arr = uneek(arr);
    for (auto elem : arr) 
        count.insert(pair<int, int> (elem, 0));
    for (auto elem : arr_copy) {
        auto it = count.find(elem);
        (it->second)++;
    }
    int x = 0;
    for (auto m = count.begin(); m != count.end(); m++) {
        m->second = m->second / 2;
        x += m->second;
    }
    return x;
}

int main() {   
    vector<int> x = {1, 2, 5, 7, 2, 1, 5, 5, 5, 7, 7, 2, 1};
    int res = sockProblem(x.size(), x);
    cout<<res<<endl;
    return 0;
}