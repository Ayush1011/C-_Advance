#include <bits/stdc++.h> 
using namespace std; 
  



  int findProductSum(long long A[], long long n) 
{ 
    int array_sum = 0; 
    for (int i = 0; i < n; i++) 
        array_sum +=  A[i]%1000000007; 
  
 
    int array_sum_square = array_sum * array_sum; 
  
    int individual_square_sum = 0; 
    for (int i = 0; i < n; i++) 
        individual_square_sum += (A[i]*A[i])%1000000007; 
  

    return (array_sum_square - individual_square_sum)/2; 
} 

  int main(){

      long long n;
      cin>>n;
      long long arr[n];
      for(long long i=0;i<n;i++){
          cin>>arr[i];
      }
      long long sum=0;
    cout<<findProductSum(arr,n)<<endl;
     
  }