#include<bits/stdc++.h>

using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){

        int size;
        cin>>size;
         int m,n;
        vector<int>v;
         vector<int>v1;
        for(int i=0;i<size;i++){
           
            cin>>m>>n;

            v.push_back(m);
            v.push_back(n);
            
        }
      
        

        sort(v.begin(),v.end());
        // sort(v1.begin(),v1.end());


        auto ip = unique(v.begin(), v.end()); 
   
         v.resize(distance(v.begin(), ip));

        // auto ip1 = unique(v1.begin(), v1.end()); 
   
        //  v1.resize(distance(v1.begin(), ip1));


        cout<<v.size()<<endl;

    }

    return 0;
}