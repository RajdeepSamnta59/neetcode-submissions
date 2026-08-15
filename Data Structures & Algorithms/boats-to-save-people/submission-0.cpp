class Solution {
public:
// 1 2 4 5 
    int numRescueBoats(vector<int>& peo, int limit) {
        sort(peo.begin(),peo.end());
        int i=0;
        int j=peo.size()-1;
        int cnt=0;
        while(i<=j){
            if(peo[i]+peo[j]<=limit){
                cnt++;
                i++;
                j--;

            }
            else {
                cnt++;
                j--;
            }
        }
        return cnt;
        
    }
};