#include <bits/stdc++.h>
using namespace std;


int lis(int arr[],int n,int i)
{
    if(i>n)
    {
        return 0;
    }

    if(arr[i]>arr[i+1])
    {
        return 1 + lis(arr,n,i+1);
    }
    else{
        return max(lis(arr,n,i+1),lis(arr,n,i));
    }

}


int main() 
{ 
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<lis( arr, n,0); 
    return 0; 
} 