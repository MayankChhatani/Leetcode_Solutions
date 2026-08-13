class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        // int bestEnd = nums[0];   mai runningSum bolunga
        int runningSum = nums[0];
        // runningSum stores the maximum subarray sum ending at the current index
        int ans = nums[0];

        for(int i=1;i<n;i++){
            int sum1 = runningSum + nums[i];
            int sum2 = nums[i];

            runningSum = max(sum1, sum2);
            ans = max(runningSum, ans); 
        }
        return ans;
    }
};


// "It doesn't look like Kadane. Why?"

// To tu defensive mat hona. Explain kar:

// "The implementation may not look like the traditional Kadane's Algorithm because I am not using an explicit variable like currentSum or maxSum, but the logic is exactly Kadane's. At every index, I am calculating the maximum subarray sum ending at that index by taking the maximum of extending the previous subarray or starting a new one."