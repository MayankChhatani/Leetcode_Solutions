class Solution {
public:
    void solve(int open, int cls,string s,int n,vector<string>&ans){
        if(open == n && cls == n){
            ans.push_back(s);
            return;
        }
        if(open < n){
            solve(open+1,cls,s +"(",n,ans);
        }
        if(cls<open){  
           solve(open,cls+1,s +")",n,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open=0;
        int cls=0;
        string s;
        solve (open, cls,"",n,ans);
        return ans;

    }
};