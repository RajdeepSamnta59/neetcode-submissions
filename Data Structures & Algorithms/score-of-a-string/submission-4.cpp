class Solution {
public:
    int scoreOfString(string s) {
    int ans=0;
    int n=s.size();
    for(int i=1;i<=n-1;i++){
        ans+=abs(s[i-1]-s[i]);
        
    }
      return ans;  
    }
};