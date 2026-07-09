class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index= 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]== target){
                index=i;
                return index;
            }
        }

        return -1;
    }
};
