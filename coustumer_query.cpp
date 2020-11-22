#include<bits/stdc++.h>

using namespace std;


vector<pair<int,int>>v;
void solve(int n, int d, int a, int b,  
                        int arr[][2])

{

for(int i=0;i<n;i++)
{
   
        v.push_back(make_pair(a*arr[i][0]+b*arr[i][1],i+1));
    
}

sort(v.begin(),v.end());

for(auto i=v.begin();i!=v.end();i++)
{
    if(i->first<d)
    {
        d-=i->first;
        cout<<i->second<<" ";

    }
}

}


int main(){
        int n = 5; 
    long d = 5; 
    int a = 1, b = 1; 
    int arr[][2] = {{2, 0}, 
                    {3, 2}, 
                    {4, 4}, 
                    {10, 0}, 
                    {0, 1}}; 
      
    solve(n, d, a, b, arr); 
    return 0; 
}