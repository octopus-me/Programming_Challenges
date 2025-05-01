#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int kthSmalest(vector<int> numbers, int k){
        if(numbers.size() == 0 || k==0) return 0;
        priority_queue <int> pq;

        for(int i: numbers){
            pq.push(i);
            if(pq.size() > k) pq.pop();
        }
        return pq.top();
    }
    int kthLargest(vector<int> numbers, int k){
        if(numbers.size() == 0 || k==0) return 0;

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i: numbers){
            pq.push(i);
            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();
    }
};

int main(){
    Solution s;

    cout << s.kthLargest({3,2,1,5,6,4}, 2) << endl;

    cout << s.kthLargest({3,2,3,1,2,4,5,5,6}, 4) << endl;
    return 0;
}