class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0;
        int high =k;
        double sum=0; 

        if(nums.size() == 1){
            return nums[0];
        }

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }

        double avgg=sum/k;
        double ans=avgg;
        while(high < n){
            sum=sum - nums[low] +nums[high];
            avgg = sum / k;
            ans=max(ans,avgg);
            low++;
            high++;
        }
        return ans;

    }
};