class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        int maxEnd = nums[0];
        int minEnd = nums[0];
        int ans = nums[0];

        for(int i = 1; i < n;i++){
            int pro1 = nums[i];
            int pro2 = maxEnd * nums[i];   // maximum product nikalne ka path
            int pro3 = minEnd * nums[i];   // minend product 

            maxEnd = max(pro1,max(pro2, pro3));
            minEnd = min(pro1,min(pro2, pro3));

            ans = max(ans,maxEnd);
        }
        return ans;
    }
};