                            // brute force

class Solution {
public:
    string longestPalindrome(string s) {
        string finalAns="";
        int n=s.size();
        // bool valid = true;     // bahar declare kardiye har ans ke liye reset hona chaiye
        for(int i=0;i<n;i++){
            string ans="";
            for(int j=i;j<n;j++){
                bool valid = true;
                ans+=s[j];
                int l=0;
                int r=ans.size()-1;
                while(l < r){
                    if (ans[l] != ans[r]){
                        valid =false;
                        break;
                    }
                    l++;
                    r--;
                }
                if(valid && ans.length() > finalAns.length()){
                    finalAns=ans;
                }
            }
        }
        return finalAns;
    }
};