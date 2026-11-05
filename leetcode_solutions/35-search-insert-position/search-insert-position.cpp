class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] < target){
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else if( nums[mid] == target){
                return mid;
            }
        }
        // if(nums[high] < target){
        //    return high;
        // }else{
            return  high +1;   // kyu kiya aisa kyu ki  high aur low at last jab kuch nhi milta hai tab dono ek hi index ko point kar rahe hote hai aur agar tab bhi nhi mila  matlab agla wala index mai use hone chaiye tha(insert)
        // }
    }
};