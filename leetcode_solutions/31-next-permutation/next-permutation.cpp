class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // now the optimal solution - basically the implementtation of the stl function 
        int dip=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                dip = i;
                break;
            }
        }
        if(dip == -1){    // agar decending thai array to pura sorted hi uska  next  permutation hoga 
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i] > nums[dip]){
                swap(nums[i], nums[dip]);
                break;
            }
        }
        // abe suffix reverse karna padega
        reverse(nums.begin()+dip+1,nums.end()); // reverse iterator leta hai index nhi 
    }
}; 

// ab kaha pela raha hai 
