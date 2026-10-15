class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        int start = timeSeries[0];
        int end = timeSeries[0] + duration -1;
        int i = 1;
        while(i < timeSeries.size()){
            if(end >= timeSeries[i]){
                end = timeSeries[i] + duration -1;
            }
            else{
                // if(start == 1){
                //     ans += end;          jarurat nhi hai iski
                // }else{ 
                // }
                ans += end - start + 1;    // bhai +1 lagana padega na
                start = timeSeries[i];
                end = timeSeries[i] + duration -1;
            }
            i++;
        }
        // if(start == 1){
        //     ans += end;
        // }
        // else{
        // }
            ans += end - start + 1;
        return ans;
    }
};