class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int row = 0;
            for(int j=0;j<accounts[i].size();j++){
                row+=accounts[i][j];
            }
            sum=max(sum,row);
        }
        return sum;
    }
};