#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        char findChar1(string s){
            // Considering just lowercase letters
            vector<int> letters(26,0);

            for(char c: s){
                letters[c - 'a'] ++;
            }

            int max = INT_MIN;
            int index = 0;

            for(int i=0;i<26;i++){
                if(letters[i]>max){
                    max = letters[i];
                    index=i;
                }
            }

            return index + 'a';
        }


        char findChar2(string s){
            //Considering every char
            map<char, int> m;

            for(char c: s){
                if(m.find(c) != m.end()){
                    m[c]++;
                } else {
                    m[c] = 1;
                }
            }

            pair <char, int> max_value = {'\0', INT_MIN};

            for(const auto &[k,v]: m){
                if(v > max_value.second){
                    max_value.first = k;
                    max_value.second = v;
                }


            }
            return max_value.first;
        }

};

int main(){
    Solution s;

    cout << s.findChar1("aabbba") << endl;
    cout << s.findChar2("andel651896//*wr2r9vmr][/[]/[´/;´[[/w8726485nsijdfgnjaks]]]") << endl;
    return 0;
}