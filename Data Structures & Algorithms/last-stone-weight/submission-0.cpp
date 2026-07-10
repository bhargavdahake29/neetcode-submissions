class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int i=1;
        int n= stones.size();

        while(i<n){
            sort(stones.begin(), stones.end());
            int value= stones[n-i]- stones[n-i-1];
            stones[n-i-1]= value;
            i++;
        }

        return stones[0];
    }
};
