class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = accumulate(nums.begin(), nums.end(), 0LL);
        int rem = total % p;
        if (rem == 0) return 0;
        unordered_map<int, int> mm;
        mm[0] = -1;
        long long prefixSum = 0;
        int result = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            prefixSum = (prefixSum + nums[i]) % p;
            int target = (prefixSum - rem + p) % p;
            if (mm.find(target) != mm.end()) {
                result = min(result, i - mm[target]);
            }
            mm[prefixSum] = i;
        }
        return (result == nums.size()) ? -1 : result;
    }
};
