#include <bits/stdc++.h>
using namespace std;

struct spread_rumour
{
    int a;
    int b;
};


int main(){

        int n,k;


        cin>>n>>k;


        if(n==0){
            cout<<0;
            exit ;
        }
        
        int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        spread_rumour val[k];
        for(int i=0;i<k;i++)
        {
            cin>>val[i].a;
            cin>>val[i].b;
        }
        
        bool isvisited[n+1]={false};
        int count=0;
        for(int i=0;i<k;i++){

            if(isvisited[val[i].a]==false){
                    count+=arr[val[i].a];
                    isvisited[val[i].a]=true;
                    isvisited[val[i].b]=true;
            }else{
            isvisited[val[i].a]=true;
             isvisited[val[i].b]=true;
            }

            
        }



        for(int i=1;i<=n;i++){
            if(isvisited[i]==false){
                count+=arr[i];
            }
        }

        cout<<count<<endl;

}