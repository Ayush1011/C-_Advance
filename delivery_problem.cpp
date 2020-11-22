#include<bits/stdc++.h>

using namespace std;


int main(){


    int n,x,y;
    cin>>n>>x>>y;

    int A[n];
    int B[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }

        long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>B[i]&&x>0)
        {
            sum+=A[i];
            x--;
        }
        else if(A[i]<B[i]&&y>0)
        {
            sum+=B[i];
            y--;
        }
        else if(A[i]==B[i])
        {
            if(x>y)
            {
                sum+=A[i];
            }else
            {
                sum+=B[i];
            }
            
        }


    }

    cout<<sum<<endl;
    

    return 0;
}