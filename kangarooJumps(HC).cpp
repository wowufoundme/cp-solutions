#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    bool meet = false, passed = false;
    string res;
    int jumps = 0, curX1 = x1, curX2 = x2;
    while(!meet && !passed) {
        jumps += 1;
        curX1 += v1;
        curX2 += v2;
        if (curX1 == curX2) 
            meet = true;
        if ( (x1 >= x2) && (curX1 < curX2) && !meet)
            passed = true;
        if ( (x2 >= x1) && (curX1 > curX2) && !meet)
            passed = true;
    }
    if (meet) 
        res = "YES";
    else
        res = "NO";

    return res;
}

int main() {
    string res = kangaroo(0, 2, 5, 3);
    cout<<res<<endl;
    return 0;
}