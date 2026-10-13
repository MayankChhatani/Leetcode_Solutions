class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n = firstList.size();
        int n2 = secondList.size();
        vector<vector<int>>ans;
        int i = 0; 
        int j = 0;
        
        if(firstList.empty() || secondList.empty()){
            return ans;
        }
        while( i < n && j < n2 ){
            if(firstList[i][0] <= secondList[j][0]){
                if(firstList[i][1] >= secondList[j][0]){
                    int start = max(firstList[i][0] , secondList[j][0]);
                    int end = min(firstList[i][1] , secondList[j][1]);
                    ans.push_back({start , end});
                }
            }
            else{
                if(secondList[j][1] >= firstList[i][0]){
                    int start = max(firstList[i][0],secondList[j][0]);
                    int end = min(firstList[i][1],secondList[j][1]);
                    ans.push_back({start,end});
                }
            }
            if(firstList[i][1] < secondList[j][1]){
                i++;
            }
            // else if(secondList[j][1] < firstList[i][1]){    // Equal end points hone par bhi kisi ek pointer ko aage badhana zaroori hai.
            else{
                j++;
            }
        }
        return ans;
    }
};