class Solution {
public:
  // optimal 
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int fix=0;
        for(int i=1;i<nums.size();i++){
            if(nums[fix] != nums[i] ){
                fix++;
                nums[fix] = nums[i];
                // fix++;
            }
        }
        return fix+1;
    }
};