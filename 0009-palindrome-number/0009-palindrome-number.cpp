class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string reversed=s;
        reverse(reversed.begin(),reversed.end());
        return s==reversed;
        }
    
};