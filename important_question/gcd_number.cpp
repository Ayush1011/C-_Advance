#include <bits/stdc++.h> 
using namespace std; 

vector<int>v;
void findSmallest(int n) 
{ 
    int i, j = 0; 
 
    int res[INT_MAX];  
  
    
    if (n < 10) 
    { 
        cout << n + 10; 
        return; 
    } 
  
  
    for (i = 9; i > 1; i--) 
    { 
      
        while (n % i == 0) 
        { 
            n = n / i; 
            res[j] = i; 
            j++; 
        } 
    } 
  
    
    if (n > 10) 
    { 
        return; 
    } 
  
    for (i = j - 1; i >= 0; i--) 
        v.push_back(res[i]); 
} 

int main(){


    int n;
    long long p;
    cin>>n>>p;

   

    return 0;
}