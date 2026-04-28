// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        unordered_set<int>nums(arr.begin(), arr.end());

        

        for (int x : arr){
            if (x == 0 || x == 1) if (count(arr.begin(), arr.end(), x) > 1) return true;
            if (nums.find(2*x) != nums.end() && x!=2*x) return true;
        }
        return false;
        
    }
};