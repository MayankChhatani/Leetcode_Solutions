class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int ans=0;
        int n = nums.size();
        int num_i=INT_MIN;
        for(int j=k;j<n;j++){       //start hi j se hoga to i nikalna asan hojayega
            // int num_i =max(num_i,nums[j - k]); // bhai wo intialize hi nhi hua hai to compare kaie hoga
            num_i =max(num_i,nums[j - k]);
            ans=max(num_i+nums[j], ans);

        }
        return ans;
    }
};