#include<bits/stdc++.h>

using namespace std;


int minproduct(int a[],int b[],int n,int k)
{
     int res=0;
     int temp=0;
     int pos=0;
     int diff=0;

     for(int i=0;i<n;i++)
     {
         pos=a[i]*b[i];
         res+=pos;
         
        if(pos<0&&a[i]<0){
            temp= (a[i]-2*k)*b[i];
        }
        else if(pos<0&&a[i]>0)
        {
            temp= (a[i]+2*k)*b[i];

        }
        else if(pos>0&&a[i]>0)
        {
            temp= (a[i]-2*k)*b[i];

        }
        else if(pos>0&&a[i]<0)
        {
            temp= (a[i]+2*k)*b[i];

        }
int d=abs(pos-temp);
    if(d>diff)
    {
        diff=d;
    }
     }

     return res-diff;


    


}


int main(){
 int a[] = { 2, 3, 4, 5, 4 }; 
    int b[] = { 3, 4, 2, 3, 2 }; 
    int n = 5, k = 3; 
    cout << minproduct(a, b, n, k)  
         << endl; 
    return 0; 

}