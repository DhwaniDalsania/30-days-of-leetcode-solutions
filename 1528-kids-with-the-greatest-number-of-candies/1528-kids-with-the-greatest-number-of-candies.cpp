class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int Candies= candies.size();
        int maxCandies = *max_element(candies.begin(), candies.end()); 

        vector<bool> result(Candies);
        for(int i=0;i<Candies;i++)
        {
            result[i]=(candies[i]+extraCandies>=maxCandies);
        
        }
    return result;
    }
};