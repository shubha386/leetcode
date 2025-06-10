class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long count=0;
        unordered_map<double,int>m;
        for(int i = 0 ; i < rectangles.size() ; i++)
        {
            double ratio=(double)rectangles[i][0]/rectangles[i][1];
            m[ratio] = m[ratio] + 1;
        }
        for(auto i : m){
            long long temp = i.second;
            count+=temp*(temp-1)/2;
        }
        return count;
    }
};