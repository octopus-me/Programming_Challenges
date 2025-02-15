#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> hashset;

        while(n != 1){
            if(hashset.count(n) > 0) return false;
            hashset.insert(n);

            int aux = n;

            n = 0;

            while(aux != 0){
                int unit = aux % 10;
                aux  = aux / 10;

                n += unit*unit;
            }


        }
        return true;
        
    }
};