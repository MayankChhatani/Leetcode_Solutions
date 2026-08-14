class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int noDelete = arr[0];
        int oneDelete = INT_MIN/2;
        int ans=arr[0];

        for(int i=1;i<n;i++){

            // int prevOneDelete = 
            int prevNoDelete = noDelete;
            // noDeleted += arr[i];
            // int v1 = arr[i];
            noDelete = max(noDelete+arr[i], arr[i]);
            oneDelete = max(prevNoDelete, oneDelete+arr[i]);
            ans = max(ans, max(noDelete,oneDelete));
        }

        return ans;
    }
};