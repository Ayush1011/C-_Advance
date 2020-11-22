#include<bits/stdc++.h>

using namespace std;

bool ifPossible(int arr[],int n){
    int cp[n];
    copy(arr,arr+n,cp);

    sort(cp,cp+n);

    for(int i=0;i<n;i++)
    {
        if(!(arr[i]==cp[i])&&!(arr[n-i-1]==cp[i]))
        {
            return false;
        }
    }
    return true;
}




int main() 
{ 
    int arr[] = { 1, 7, 6, 4, 5, 3, 2, 8 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    if (ifPossible(arr, n)) 
       cout << "Yes"; 
    else
       cout << "No"; 
  
    return 0; 
} 