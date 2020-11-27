#include<bits/stdc++.h>

using namespace std;


int getMinDiff(int arr[],int n,int k){


    

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        if(abs(arr[i+1]-arr[i])<=k)
        {
            arr[i]+=k;
        }else{
             arr[i]-=k;
        }
    }
    arr[n-1]-=k;

    arr[0]+=k;
 sort(arr,arr+n);

return arr[n-1]-arr[0];


}


int main() 
{ 
    int arr[] = {1, 5, 15, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 3; 
    cout << "\nMaximum difference is "
        << getMinDiff(arr, n, k); 
    return 0; 
} 
