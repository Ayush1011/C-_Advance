#include <bits/stdc++.h>
using namespace std;
#define int int 

void primeFun(int n, vector<int>&vPrime) {  
    while (n%2==0) {
        vPrime.push_back(2);
        n=n/2;  
    }  
  
    for (int i=3; i<=sqrt(n); i=i+2) {  
        while (n%i==0)  {  
           vPrime.push_back(i);  
            n=n/i;  
        }  
    }  
    if (n>2)  
        vPrime.push_back(n); 
}
int func(int arr[], int n, int p) {
    int maxVar = 0;
    int sol = -1;
    vector<int>v[n];
    for(int i=0;i<n;i++){
    primeFun(arr[i], v[i]);
    sort(v[i].begin(),v[i].end());
    if(maxVar< v[i].size())
    maxVar = v[i].size();
}

    for(int i=0; i<n; i++) {
        if(v[i].size()>0) {
        if(v[i][v[i].size()-1]<=p && maxVar==v[i].size())
        {
            sol = max(sol, arr[i]);
        }
    }
  }
  if(sol != -1) return sol;
  else return -1;
}

int main() {
        int N, P;
        cin>>N>>P;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        sort(arr, arr+N);
        cout<<func(arr, N, P)<<endl;
}