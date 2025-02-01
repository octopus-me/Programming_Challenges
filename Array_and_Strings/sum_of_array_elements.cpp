#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    int sum(vector<int> array){
        int sum = 0;
        for(int i: array){
            sum += i;
        }
        return sum; 
    }
};

int main(){
    Solution s;

    int sum = s.sum({1,2,3,4,5});

    cout << sum << endl;

    return 0;
}