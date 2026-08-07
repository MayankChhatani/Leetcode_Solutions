            //              optimal approach
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0;
        int right = 0;
        int ans = 0;
        // unordered_map<int,int>mp;
        vector<int> arr(26,0);
        int windowSize=0;
        int maxFreq=0;

        while(right < n){
            arr[s[right] - 'A']++;
            maxFreq = max(maxFreq, arr[s[right] - 'A']);
            windowSize = right - left +1;

            while (windowSize - maxFreq > k) {
                arr[s[left] - 'A']--;
                left++;
                windowSize = right - left +1;
            }
            ans = max(ans, right - left+1);
            right++;
        }
        return ans;

    }
};