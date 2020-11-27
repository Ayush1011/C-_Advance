#include <bits/stdc++.h> 
using namespace std; 

int printDigit(int N) 
{ 
    int arr[100]; 
    int i = 0; 
    int j, r; 
 
    while (N != 0) { 
  
        r = N % 10; 
  
        arr[i] = r; 
        i++; 
  
       
        N = N / 10; 
    } 
  
  int sum=0;
    for (j = i - 1; j > -1; j--) { 
        sum+=arr[j];
    } 

    return sum;
} 

int main(){



    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        int k=printDigit(arr[i]);
        cout<<k<<" ";
    }

   

    return 0;
}