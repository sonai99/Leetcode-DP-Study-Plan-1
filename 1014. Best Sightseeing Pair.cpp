class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int imax=0,curr=0;
        for(int i=0;i<values.size();i++)
        {
            curr = max(curr, imax + values[i] - i);
            imax = max(imax, values[i]+i);
        }
        return curr;
    }
};
