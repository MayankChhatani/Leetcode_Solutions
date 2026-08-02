                        //  brute force

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>arr;
        int n=nums.size();
        // int l=0;

        k = k%n ; // k kabhi kabhi n se bada bhi to ho sat ahi
        for(int i=n-k;i<n;i++){             //Mistake 2: k actually split point nahi hai 
            arr.push_back(nums[i]);             //  so split point kya hoga n - k
            // l = i;
        }
        // reverse(arr.begin(),arr.end());
        for(int i=0;i<n-k;i++){
            arr.push_back(nums[i]);
        }
        nums = arr;
    }
};