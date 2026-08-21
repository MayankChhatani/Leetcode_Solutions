class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto c : s){
            mp[c]++;
        }
        bool flag =false;
        int sum = 0;
        for(auto it : mp){
            if(it.second % 2 == 1) {
                flag= true;
            }
            if(it.second >= 2){
                sum += it.second/2;
            }
        }
        sum=sum*2;
        return flag ? sum+1 : sum;
    }
};