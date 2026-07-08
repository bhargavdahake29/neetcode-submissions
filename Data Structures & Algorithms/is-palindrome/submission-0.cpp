class Solution {
public:
    bool isPalindrome(string s) {
        string m= "";
        string n= "";

        for(auto c: s){
            if(isalnum(c)){
                m+= tolower(c);
            }
        }

        n = m;
        reverse(n.begin(), n.end());

        return m==n;
    }
};