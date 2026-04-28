// Time complexity: O(n)
// Space complexity: O(n)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        vector<int> result(n);

        for (int i=0; i<n; i++){
            int new_i = (i+k)%n;
            result[new_i] = nums[i];
        }

        nums = result;
        
    }
};