#include<bits/stdc++.h>

using namespace std;


int digitalRoot(string num) 
{ 
    // If num is 0. 
    if (num.compare("0") == 0) 
        return 0; 
  
    // Count sum of digits under mod 9 
    int ans = 0; 
    for (int i=0; i<num.length(); i++) 
        ans = (ans + num[i]-'0') % 9; 
  
    // If digit sum is multiple of 9, answer 
    // 9, else remainder with 9. 
    return (ans == 0)? 9 : ans % 9; 
}

int main(){

    int test;
    cin>>test;
    while(test--){

        
        int n,k;
        cin>>n>>k;
        int final=0;

        for(int i=0;i<INT_MAX;i++)
        {
            std::string s = std::to_string(i);

            if(digitalRoot(s)==k){
                cout<<i+k;

            }
            
        }

    }
}