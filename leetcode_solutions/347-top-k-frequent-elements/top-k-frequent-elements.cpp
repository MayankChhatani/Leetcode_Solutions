class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i = 0;i < n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>freq(mp.begin(),mp.end());
        sort(freq.begin(),freq.end(), [](pair<int,int>&a , pair<int,int>&b){
            return a.second > b.second ; 
        });
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};