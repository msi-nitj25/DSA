// sum=k , only for zero/positive integers

/*

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return 0; // Safety check

        int i = 0;
        int j = 0;
        long long sum = nums[0]; // Start with the first number!
        int maxC = 0;

        while (j < n) {
            // 1. Check if we hit the target right now
            if (sum == k) {
                maxC = max(maxC, j - i + 1);
            }

            // 2. If the sum is LESS THAN OR EQUAL to k, keep expanding to the right!
            // (We expand even if it equals k just in case the next numbers are 0s)
            if (sum <= k) {
                j++;
                if (j < n) {
                    sum = sum + nums[j];
                }
            } 
            // 3. If the sum is too big, shrink from the left
            else {
                sum = sum - nums[i];
                i++;
            }
        }
        
        return maxC;
    }
};

*/