#include<bits/stdc++.h>

using namespace std;



int main(){

    int test;
    cin>>test;
    while(test--){

        vector<int>v;

        int n;
        cin>>n;
        int arr[n];

        int k;
        for(int i=0;i<n;i++){
            cin>>k;
            v.push_back(k);
        }

        sort(v.begin(),v.end());


        int sum=0;
        while(!v.empty()){

            for(int i=0;i<4;i++){
                if(i<2){

              if(!v.empty()){
                sum+=v.back();
              }
                
                }
              v.pop_back();


            }

        }


        cout<<sum<<endl;



    }


    return 0;
}