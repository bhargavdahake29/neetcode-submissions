class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int x: nums){
            mp[x]++;
        }

        vector<vector<int>> vec;
        for(auto it: mp){
            vec.push_back({it.first, it.second});
        }

        sort(vec.begin(), vec.end(), [&](auto a, auto b){
            return a[1]> b[1];
        });

        int i=0;
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(vec[i][0]);
        }

        return ans;
    }
};
