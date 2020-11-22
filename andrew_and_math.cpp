#include <bits/stdc++.h> 
using namespace std; 



vector<int>v;



void primeFactors(int n)  
{  
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        v.push_back(2);  
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
        v.push_back(i);
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
       v.push_back(n); 
} 



int main(){

    vector<int>k;
    int n,p;
    cin>>n>>p;



    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


int maxs=0;
int num=-1;
    for(int i=0;i<n;i++){

        primeFactors(arr[i]);
        
        sort(v.begin(),v.end());

        if(v[v.size()-1]<=p)
        {

            if(v.size()>maxs)
            {
                maxs=v.size();
                num=arr[i];

            }else if(v.size()==maxs){

                maxs=max(arr[i],num);
            
            }

        }

        v.clear();
    }

    cout<<num;
    return 0;


}