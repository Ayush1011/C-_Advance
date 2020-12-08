#include <bits/stdc++.h> 
using namespace std; 

int M=4;
int N=4;
int longestRepeatedSubSeq(string s)
{
    int n=s.length();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;i<=n;j++){
            dp[i][j]=0;
        }
    }


    for(int i=1;i<=n;i++){
        for(int j=1;i<=n;j++){
            if(s[i-1]==s[j-1]&&i!=j)
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }


        }
    }

    return dp[n][n];



}











int main() 
{ 
    string str = "AABEBCDD"; 
    cout << longestRepeatedSubSeq(str); 
    return 0; 
} 