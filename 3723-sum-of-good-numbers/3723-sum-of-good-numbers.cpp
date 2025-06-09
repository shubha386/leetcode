class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
         int sum = 0;
        for(int i = 0, n = nums.size(); i < n; ++i){
            if(i >= k && nums[i - k] >= nums[i]) continue;
            if(i + k < n && nums[i + k] >= nums[i]) continue;
            sum += nums[i];
        }
        return sum;
    }
};