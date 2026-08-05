class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size()-1;
        int left=0;
        int right=n;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        while(left < right){
            if(!isalnum(s[left])){
                left++;
            }else if(!isalnum(s[right])){
                right--;
            }
            if(isalnum(s[left]) && isalnum(s[right])){
                if(s[left] != s[right]){
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};