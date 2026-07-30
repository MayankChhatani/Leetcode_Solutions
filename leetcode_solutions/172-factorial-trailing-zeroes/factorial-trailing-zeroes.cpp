class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        int num = n;
        while(num != 0){
            num = num/5;
            ans+=num;
        }
        return ans;
    }
};