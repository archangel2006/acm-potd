

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n= nums.size();

        if (count(nums.begin(), nums.end(), 0) == n) return;

        int zeroes = -1;
        for (int i=0; i<n; i++){
            if (nums[i] == 0){
                zeroes = i;
                break;
            }
        }

        if (zeroes == -1) return;


        for (int i=1; i<n; i++){
            if (nums[i] != 0){
                swap(nums[i], nums[zeroes]);
                zeroes++;
            }
        }
        return;
    }
};