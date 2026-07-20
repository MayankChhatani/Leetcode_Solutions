class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<char>st;
    for(auto x : s){
        if(!st.empty() && x =='#'){
            st.pop();
        }else if(x != '#'){
            st.push(x);
        }
    }
    string ans1;
    string ans2;
    while(!st.empty()){
        ans1+=st.top();
        st.pop();
    }
    reverse(ans1.begin(),ans1.end());

    for(auto x : t){
      if(!st.empty() && x =='#'){
            st.pop();
        }else if(x != '#'){
            st.push(x);
        }
    }

    while(!st.empty()){
        ans2+=st.top();
        st.pop();
    }
    reverse(ans2.begin(),ans2.end());
    
    if(ans1 == ans2){
        return true;
    }
    return false;
    }
};