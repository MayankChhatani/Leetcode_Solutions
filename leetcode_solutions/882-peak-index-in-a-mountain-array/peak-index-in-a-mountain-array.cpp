class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int answer=-1;
        // int prev = INT_MIN;
        int left= 0 ;
        int right = arr.size()-1;
        while(left <= right){
            int mid = (right + left) / 2 ;
            if(arr[mid] < arr[mid + 1]){
                left = mid + 1;
            }
            else if(arr[mid] > arr[mid +1]){
                right = mid - 1;
                answer = mid;
            }
            // else{

            // }
        }
        return answer;
    }
};