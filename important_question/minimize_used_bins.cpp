#include<bits/stdc++.h>

using namespace std;

int nextFit(int weight[],int n,int c){

    int max_rem=c;
    int bins=0;
    for(int i=0;i<n;i++)
    {
        if(weight[i]>max_rem)
        {
            bins++;
            max_rem=c-weight[i];
        }else{
            max_rem-=weight[i];
        }
    }

    return bins;


}

int main() 
{ 
    int weight[] = { 2, 5, 4, 7, 1, 3, 8 }; 
    int c = 10; 
    int n = sizeof(weight) / sizeof(weight[0]); 
    cout << "Number of bins required in Next Fit : "
         << nextFit(weight, n, c); 
    return 0; 
}