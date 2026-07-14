class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
       // optimal solution 
        int cnt=0;
        unordered_map<int,int>mp;
        for(int &it1 :nums1){
            for(int &it2 :nums2){
                mp[it1+it2]++;
            }
        }
        for(int &it3 :nums3){
            for(int &it4 : nums4){
                if(mp.find(0-it3-it4) != mp.end()){
                    cnt +=mp[0-it3-it4];
                }
            }
        }
        return cnt;
    }
};