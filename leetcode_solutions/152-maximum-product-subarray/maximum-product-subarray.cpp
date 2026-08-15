class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int minProd = nums[0];
        int maxProd = nums[0];
        int maxiOfAll = nums[0];
        // int runningProd = nums[0];

        for(int i = 1;i<n;i++){
            int prod1 = nums[i];
            
            // maxProd = max(maxProd, max(minProd * prod,prod));
            // minProd = min(minProd * prod, prod);

            //core idea miss kar gye chhatani ji

            // purane wale ko minend aur maxend ko bhi to store krna padega na 

            int prod2 = minProd * prod1;
            int prod3 = maxProd * prod1;

            // maxProd = max(maxProd, max(prod2,prod3));   // yaha bhi mai mai main objective hi bhulgya har baar current state ko use karna chaiye 
            // minProd = min(minProd, min(prod2,prod3));
            maxProd = max(prod1, max(prod2,prod3));
            minProd = min(prod1, min(prod2,prod3));


            maxiOfAll = max(maxiOfAll,maxProd);    
        }
        return maxiOfAll;
    }
};

