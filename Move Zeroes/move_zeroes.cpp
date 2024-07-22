class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1; // Start from the second element
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) { // Check if the current element is different from the previous one
                nums[index++] = nums[i]; // Place the unique element at the current index
            }
        }
    return index;
    }
};