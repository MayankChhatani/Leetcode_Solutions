class Solution { 
public: 
    int maxSubarraySumCircular(vector<int>& nums) { 
        // lagega kadane hi par isko douughnut maan ke 
 
        int n = nums.size(); 
        int maxSum = nums[0]; 
        int minSum = nums[0]; 
 
        int currMinSum = nums[0]; 
        int currMaxSum = nums[0]; 
 
        int ansMaxSum = nums[0]; 
        int sum = nums[0]; 
        for(int i = 1;i < n;i++){ 
            int sum1 = nums[i]; 
            sum +=sum1; 
            currMaxSum = max(currMaxSum + sum1,sum1); 
            maxSum = max(maxSum,currMaxSum); 
             
            currMinSum = min(currMinSum + sum1,sum1); 
            minSum = min(minSum,currMinSum); 
        } 
            if(maxSum < 0){ // hum ye check kar rahe hai ki sare number -ve hai kya (agar hai to maximum of them return hoga)  
                return maxSum; 
            } 
            return max(maxSum,sum - minSum); 
        // return ansMaxSum; 
    } 
};