#include <bits/stdc++.h> 
using namespace std; 


int main(){

    int v1,v2;
    cin>>v1>>v2;

    int t,d;
    cin>>t>>d;
    // vector<int>v;
    //   v.push_back(0);
    // v.push_back(v1);

    // int rn=v1;
    // for(int i=1;i<t-1;i++)
    // {

        
    //     for(int j=d;j>=0;j--)
    //     {
    //         if(v[i]+j<=abs(v2+d)){

    //             rn=v[i]+j;
    //             v.push_back(rn);

    //             break;
    //         }

    //     }
    // }
    // v.push_back(v2);

    // long long sum=0;
    // for(int i=0;i<v.size();i++){
    //     sum+=v[i];
    // }
    // cout<<sum<<endl;



    int ans=v1;
    int v=v1;
    t--;
    while(t)
    {
        for(int i=d;i>=-d;i--)
        {
            if(v+i-(t-1)*d<=v2)
            {
                v+=i;
                ans+=v;
                t--;
                break;
            }
        }
    }
    printf("%d\n",ans);
    return 0;

    
}