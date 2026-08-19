class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0;
        int answer = 0;
        unordered_map<int,int> mp;
        mp[sum]++;
        for(int i=0;i<n;i++){
            sum += nums[i];
            int diff = sum - k;
            if(mp.find(diff)!=mp.end()){
                answer+=mp[diff];
            }
            mp[sum]++;
        }
        return answer;
    }
};