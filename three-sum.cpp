#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> unique(vector<vector<int>> v) {
    vector<vector<int>>::iterator ip; 
    std::sort(v.begin(), v.end()); 
    ip = std::unique(v.begin(), v.end()); 
    v.resize(distance(v.begin(), ip)); 
    return v;
}

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> sol;
    sort(nums.begin(), nums.end());
    for (auto i=nums.begin(); i != (nums.end()-2); i++) {
        for (auto j=i+1; j != (nums.end()-1); j++) {
            for (auto k=j+1; k != nums.end(); k++) {
                vector<int> temp;
                temp.push_back(*i);
                temp.push_back(*j);
                temp.push_back(*k);
                sort(temp.begin(), temp.end());
                if(accumulate(temp.begin(), temp.end(), 0) == 0) {
                    sol.push_back(temp);
                }
            }
        }
    }
    vector<vector<int>> x = unique(sol);
    return x;
}
int main() {
    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(-1);
    nums.push_back(-4);
    vector<vector<int>> x = threeSum(nums);
    return 0;
}