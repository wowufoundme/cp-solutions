#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> sol;
    int temp = target, flag = 0;
    for (int i=0; i<nums.size(); i++) {
        for (int j=0;j<nums.size(); j++) {
            if (i == j) 
                continue;
            else if (nums[i] + nums[j] == target){
                sol.push_back(i);
                sol.push_back(j);
                flag = 1;
                break;
            } else 
                continue;
        }
        if (flag == 1)
            break;
    }
    return sol;
}

int main() {
    vector<int> nums = {2, 11, 7, 15};
    int target = 9;
    vector<int> sol = twoSum(nums, target);
    cout<<*sol.begin()<<" "<<*(++sol.begin());
    return 0;
}