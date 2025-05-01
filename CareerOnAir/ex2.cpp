#include <bits/stdc++.h>

using namespace std;


class Solution{
    public:
    int numberOfPalindromicSubstrings(string s){
        int size = s.size();
        int answer = 0;

        for(int i=0;i<size;i++){
            int right=i, left=i;
            while(right >= 0 && left < size && s[right] == s[left]){
                answer++;
                right--;
                left++;
            }

            right=i, left=i+1;
            while(right >= 0 && left < size && s[right] == s[left]){
                answer++;
                right--;
                left++;
            }

        }
        return answer;

    }
};

int main(){
    Solution s;
    cout << s.numberOfPalindromicSubstrings("abc") << endl;
    return 0;
}