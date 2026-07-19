class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        int left=0;
        int right=0;
        int n = fruits.size();
        
        unordered_map<int,int>mp;
        while(right < n){
            mp[fruits[right]]++;

            while(mp.size() > 2){
                mp[fruits[left]]--;
                
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]);
                }
                left++;
            }

            if(mp.size() <= 2){
                ans=max(ans,right - left + 1);
            }
            
            right++;
        }
        return ans;
    }
};