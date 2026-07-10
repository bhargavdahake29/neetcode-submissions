class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n= arr.size();
        vector<int> suffixM(n);

        suffixM[n-1]= -1;

        for(int i=n-2; i>=0; i--){
            suffixM[i]= max(suffixM[i+1], arr[i+1]);
        }

        for(int i=0; i<arr.size(); i++){
            arr[i]= suffixM[i];
        }

        return arr;
    }
};