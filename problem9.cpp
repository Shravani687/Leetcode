class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.empty()) return 0; // Handle edge case of an empty array

    int slow = 0; // Initialize the slow pointer

    // Loop through the array with the fast pointer
    for (int fast = 1; fast < nums.size(); ++fast) {
        if (nums[fast] != nums[slow]) {
            slow++;               // Move the slow pointer
            nums[slow] = nums[fast]; // Update the next unique position
        }
    }

    return slow + 1; // Number of unique elements
}
};