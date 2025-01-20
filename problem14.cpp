#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixSum(n + 1, 0);

        // Build prefix sum array
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        int totalSum = 0;

        for (int i = 0; i < n; i++) {
            int start = max(0, i - nums[i]);
            totalSum += prefixSum[i + 1] - prefixSum[start];
        }

        return totalSum;
    }
};