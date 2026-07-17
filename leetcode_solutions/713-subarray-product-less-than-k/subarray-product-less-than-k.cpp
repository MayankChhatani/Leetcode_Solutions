class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<k){
                cnt++;
            }
            long long product = nums[i];
            for(int j=i+1;j<n;j++){
                product *= nums[j];
                if(product < k){
                    cnt++;
                }
                else{
                    break;
                }
            }
        }
        return cnt;
    }
};