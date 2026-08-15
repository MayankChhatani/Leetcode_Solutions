class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int runningSum = nums[0];
        int maximumSum = nums[0];

        for(int i=1;i<n;i++){
            int sum1 = nums[i];
            runningSum = max(runningSum + nums[i], sum1);
            maximumSum = max(maximumSum, runningSum);
        }
        return maximumSum;
    }
};