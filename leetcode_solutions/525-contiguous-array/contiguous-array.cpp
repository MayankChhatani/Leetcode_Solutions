class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        int one = 0;
        unordered_map<int,int>f;
        int res = 0;

        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                one++;
            }
            else{
                zero++;
            }
            int diff = zero - one;

            if(diff == 0){
                res = max(res,i+1);    // edge case
            }

            if(f.find(diff) != f.end()){
                int idx = f[diff];
                res = max(res, i - idx);
            }
            else{
                f[diff] = i;
            }
        }
        return res;
    }
};