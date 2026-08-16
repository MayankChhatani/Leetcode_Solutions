class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n = s.length();
        int left = 0;
        int right = 0;
        int maxLength= 0;
        while(right < n){
            mp[s[right]]++;

            while(mp[s[right]] > 1){
                mp[s[left]]--;
                left++;
            }
            maxLength = max(maxLength, right - left +1);
            right ++;
        }
        return maxLength;
    }
};