#include<bits/stdc++.h> 
#include<climits> 
using namespace std; 
  
int maxSubArraySum(int a[], int size) 
{ 
    int maxs=0;
    vector<int>v;

    for(int i=0;i<size;i++){

        int most_ugly=0;
        int mul2=2;
        int mul3=3;
        int mul5=5;

        most_ugly=min(mul2,min(mul3,mul5));

        if(most_ugly==mul2)
        {
            mul2*2;
        }
    }

} 
  
/*Driver program to test maxSubArraySum*/
int main() 
{ 
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 
    return 0; 
} 