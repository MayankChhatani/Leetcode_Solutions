class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int>mp;

        for(auto c : magazine){
            mp[c]++;
        }
        for(auto a : ransomNote){
            // if(mp.find(a) == mp.end()){      bhai yaha par ans galat isliye aahr tha kyu ki bahle hi a = 0 hogya ho par wo abhi bhi map mai to hai hi na  to ya check laga do that a> 0 hona chaiye ya jab a = 0 hojaye tab mp.erase kar do
            if(mp.find(a) == mp.end() || mp[a] == 0){
                return false;
            }
            mp[a]--;     // 
        }
        return true;
    }
};