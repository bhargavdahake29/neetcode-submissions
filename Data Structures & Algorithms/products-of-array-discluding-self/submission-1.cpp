class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixP(n, 1);
        vector<int> suffixP(n, 1);

        for (int i = 1; i < n; i++) {
            prefixP[i] = prefixP[i - 1] * nums[i - 1];
        }

        for (int i = n - 2; i >= 0; i--) {
            suffixP[i] = suffixP[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = prefixP[i] * suffixP[i];
        }

        return nums;
    }
};
