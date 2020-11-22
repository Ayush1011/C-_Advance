#include<bits/stdc++.h>
using namespace std;

void calc(int arr[],int n)
{
    sort(arr,arr+n);
    cout<<arr[0]<<" "<<arr[n-1];
}

int main(){

    int arr[]={4,5,7,3,2,1,9};
    int n = sizeof(arr)/sizeof(arr[0]); 

    calc(arr,n);
    return 0;
}