vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        int k = target - nums[i];
        if (m[k] != 0) {
            return {i, m[k] - 1};
        }
        m[nums[i]] = i + 1;
    }
    return {};
}