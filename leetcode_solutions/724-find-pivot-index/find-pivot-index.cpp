class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0;
        int rightSum = 0;
        int sum = 0;
        
        for(int i = 0;i <n; i++){
            sum +=nums[i];
        }
        // for(int i = 1;i < n; i++){                       ye nhi chalega sue to this test case  nums = [2,1,-1]   Output: 0
        //     leftSum += nums[i-1];
        //     rightSum = sum - leftSum - nums[i];
            
        //     if(leftSum == rightSum){
        //         return i;
        //     }
        // }

        for(int i = 0;i < n; i++){                       
            rightSum = sum - leftSum - nums[i];
            
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};