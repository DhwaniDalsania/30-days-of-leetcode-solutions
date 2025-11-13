class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        int count=0;
        int n;
        int result;
        while(ss>>word)
        {
            count++;
        }

            result=word.length();
        

        
            return result;

    }
};