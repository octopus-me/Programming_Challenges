class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> previous(1);
        previous[0] = 1;
        
        for(int i=1;i<=rowIndex;i++){
            vector<int> current;
            current.resize(i+1,1);
            for(int j=1;j<i;j++){
                current[j] = previous[j-1] + previous[j];
            }
            previous = current;
        }
        return previous;
    }
};


