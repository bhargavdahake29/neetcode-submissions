class Solution {
   public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        set<vector<int>> st;
        st.insert({});

        vector<vector<int>> ans = {{}};

        for (int num : nums) {
            int size = ans.size();

            for (int i = 0; i < size; i++) {
                vector<int> temp = ans[i];
                temp.push_back(num);

                st.insert(temp);
                ans.push_back(temp);
            }
        }

        vector<vector<int>> result;
        result.push_back({});
        for (auto& subset : st) {
            result.push_back(subset);
        }

        return result;
    }
};
