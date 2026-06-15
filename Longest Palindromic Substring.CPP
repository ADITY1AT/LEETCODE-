class Solution {
public:
    // string longestPalindrome(string s) {
    //     int n=s.size();
    //     vector<vector<int>>dp(n,vector<int>(n,-1));
    //     for(int i=0;i<n;i++){
    //               dp[i][i]=1;
    //     }
    //     int idx=0;
    //     int mx=1;

    //     for(int l=2;l<=n;l++){
    //         for(int i=0;i<n-l+1;i++){
    //             int j=i+l-1;
    //             if(s[i]==s[j]&& l==2){
    //                 dp[i][j]=1;
    //                 mx=l;
    //                 idx=i;
    //             }
    //              else if(s[i]==s[j]&& dp[i+1][j-1]==1){
    //                 dp[i][j]=1;
    //                 if(mx < l){
    //                     mx=l;
    //                      idx=i;
    //                 }
    //             }
    //             else dp[i][j]=0;


    //         }
    //     }
    //     return s.substr(idx,mx);
        
    // }
    bool isvalid(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
          int n=s.size();
          int start=0,len=0;
          for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                 if(s[i]==s[j]){
                    if(isvalid(s.substr(i,j-i+1))){
                        if(j-i+1 >len){
                            len=j-i+1;
                            start=i;
                        }
                    }
                 }
            }
          }
          return s.substr(start,len);
    }
};
