class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        int left=0;
        int right = nums.size()-1;
        vector<int> ans(n);
        int idx = n-1;

        while(left <= right){
            int leftSq=nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if(leftSq > rightSq){
                ans[idx]=leftSq;
                left++;
                // idx--;
            }
            else {
                ans[idx]=rightSq;
                right--;
                // idx--;
            }
            idx--;
        }
        return ans;
    }
};