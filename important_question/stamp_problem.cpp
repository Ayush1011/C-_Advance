#include<bits/stdc++.h>

using namespace std;

int factorial(int n) 
{ 
    // single line to find factorial 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 

int main(){

    int n;
    cin>>n;
    int arr[n];

    int k=factorial(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    if(k>sum){
        cout<<"NO";
    }else{
         cout<<"YES";
    }
}