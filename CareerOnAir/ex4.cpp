#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    vector<int> findIndex1(vector<int> numbers, int n){
        // O(nlogk)

        priority_queue <int> pq;
         
        for(int i: numbers) pq.push((-1) * i);

        vector<int> answer;

        int index=0;
        while(!pq.empty()){
            if(pq.top() == (-1)*n) answer.push_back(index);
            index++;
            pq.pop();
        }
        return answer;

    }

    vector<int> findIndex2(vector<int> number, int n){
        // O(n)
        vector<int> answer;

        int less = 0, equal = 0;

        for(int i: number){
            if(i < n){
                less++;
            } else if(i == n){
                equal++;
            }
        }

        while(equal > 0){
            answer.push_back(less);
            less++;
            equal--;
        }
        return answer;
    }
};

int main(){
    Solution s;

    for(int i: s.findIndex2({33,22,33,11,22}, 22)) cout << i << endl;

    return 0;    
}