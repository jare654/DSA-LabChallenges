class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Step 1: Again, create a map to store numbers and their indices.
        unordered_map<int, int> numMap;
        // Step 2: During iteration over the numbers, the complement is
        // calculated for each number.
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            // Step 3: It checks if the complement exists in the map. If so, the
            // indices are returned.
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            // Step 4: Otherwise, the current number and its index are added to
            // the map.
            numMap[nums[i]] = i;
        }
        // Step 5: If no pair sums up to the target, return an empty vector.
        return {};
    }
};