#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    int target = 150;

    map<int,int> m;

    for(int i:arr){
        int v = i - target;

        if (m.count(v)) {
            cout << "YES" << endl;
            return 0;
        }
        m[(-1)*i] = 1;
    }
    return 0;
}