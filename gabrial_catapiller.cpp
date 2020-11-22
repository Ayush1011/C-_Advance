#include<bits/stdc++.h>

using namespace std;

int calc(int h1,int h2,int n,int k)
{

    int n1=0;



    int reached=8*n+h1;

    if(reached>=h2)
    {
        return 0;
    }else if(n==k && h2-h1>8)
    {
         return -1;
    } else if(n>=k)
    {

   

    while(1)
    {


      if(reached>=h2)
      {
          break;
      }

      reached+=12*n;
      reached-=12*k;
      n1++;


     }
     return n1;
    }else{
 return -1;
    }


   

}

int main(){


        int h1,h2;
        cin>>h1>>h2;

        int n,k;
        cin>>n>>k;

        cout<<calc(h1,h2,n,k)<<endl;

    return 0;
}