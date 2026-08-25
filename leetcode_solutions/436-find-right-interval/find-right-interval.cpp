// brute force

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int>result(n,0);
        for(auto i = 0; i<n; i++){
            int mini = INT_MAX;
            int ans = -1;
            for(auto j = 0; j < n;j++){
                if(intervals[j][0] > intervals[i][1] || intervals[j][0] == intervals[i][1]){
                    if(intervals[j][0] < mini){
                        mini =  intervals[j][0];
                        ans = j;        // bhai isme minimum ka index kaha se lau 
                    }
                }
            }
            result[i] = ans;
        }
        return result;
    }
};