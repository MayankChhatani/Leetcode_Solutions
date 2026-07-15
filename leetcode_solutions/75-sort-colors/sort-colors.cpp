class Solution {
public:    

 // brute force :- selection sort
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int minvalue=i;
            for(int j=i+1;j<n;j++){
                if(nums[j] < nums[minvalue]){
                    minvalue = j;
                }
            }
                    swap(nums[i] , nums[minvalue]);
        }
    }
};

