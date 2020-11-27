#include<bits/stdc++.h>

using namespace std;

int MaxSumDifference(int arr[],int n){

    sort(arr,arr+n);

    vector<int>v;
    for(int i=0;i<n/2;i++){
        v.push_back(arr[i]);
        v.push_back(arr[n-i-1]);
    }
    int maxs=0;
    for(int i=0;i<v.size()-1;i++){

        maxs+=abs(v[i]-v[i+1]);
    }
    maxs+=abs(v[n-1]-v[0]);


    return maxs;
}


int main(){

        int a[] = { 1, 2, 4, 8 }; 
    int n = sizeof(a) / sizeof(a[0]); 
  
    cout << MaxSumDifference(a, n) << endl;
}