class Solution {
public:
    int firstOcc(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int ansIdx = -1;                         // -1 se hi initialize karna chaiye kyuki maan lo target nhi mila fir kya karoge?
        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] < target){
                low = mid +1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else {
                // if(ansIdx > mid){
                    ansIdx = mid;
                    high = mid - 1;
                // }
            }
        }
        return ansIdx;
    }
    int secondOcc(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int ansIdx = -1;                            // -1 se hi initialize karna chaiye kyuki maan lo target nhi mila fir kya karoge?
        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] < target){
                low = mid +1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else {
                // if(ansIdx < mid){
                    ansIdx = mid;
                    low = mid + 1;
                // }
            }
        }
        return ansIdx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOccurence = firstOcc(nums,target);
        int secondOccurence = secondOcc(nums,target);
        return {firstOccurence, secondOccurence};
    }
};