class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=nums[0] + nums[1] + nums[2];    
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                long long diff1 = llabs(sum - target);
                long long diff2 = llabs(ans - target);
                if(diff1 < diff2){
                    ans=sum;
                }
                if(sum < target){
                    l++;
                }
                else if(sum > target){
                    r--;
                }
                else{
                    return sum;
                }
            }
        }
        return ans;
    }
};