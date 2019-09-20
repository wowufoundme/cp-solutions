#include <bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades){
    vector<int> res;
    for (auto elem : grades) {
        int flag = 0;
        if (elem >= 38) {
            for (int j = 0; j <= 2; j++) {
                if (((elem + j) % 5) == 0) {
                    res.push_back(elem + j);
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                res.push_back(elem);
            }
        } 
        else {
            res.push_back(elem);
        }
    }
    return res;
}

int main() {
    vector<int> grades = {37, 38};
    vector<int> res = gradingStudents(grades);
    for (auto x : res) 
        cout<<x<<endl;
    return 0;
}