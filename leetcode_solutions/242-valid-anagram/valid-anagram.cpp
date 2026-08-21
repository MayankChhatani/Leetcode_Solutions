class Solution {
public:
    bool isAnagram(string s, string t) {
        // int arr[26] = {0};     ye bhi likhsakte the apan 
        int n= s.size();
        vector<int>arr(26,0);
        unordered_map<int,int>mp;
        //  simple elemination 
        if(s.size() != t.length()){
            return false;
        }
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto it : t){
            if(mp.find(it) == mp.end() || mp[it] <= 0){
                return false;
            }
            mp[it]--;
        }
        return true;
    }
};