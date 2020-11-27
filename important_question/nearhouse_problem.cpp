#include<bits/stdc++.h>

using namespace std;



int main(){

    int test;
    cin>>test;
    while(test--){

        int r,k;
        cin>>r>>k;

        if(k>2*r)
        {
            cout<<-1;
            exit;
        }

        double maxs=INT_MIN;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++){

                double p= sqrt((i*i)+(j*j));
                if(p<=(k/100)&&p>maxs)
                {
                    maxs=p;
                }
            }
        }

        if(maxs==INT_MIN)
        {
            cout<<-1;
        }else{
            cout<<maxs;
        }



    }



    return 0;
}