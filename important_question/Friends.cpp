#include <bits/stdc++.h>
using namespace std;


struct Friends
{
    int a;
    int b;
};



int main(){


    int n,k;
    cin>>n>>k;

    vector<vector<int>>v;

    Friends val[k];
    for(int i=0;i<k;i++){
        cin>>val[i].a;
        cin>>val[i].b;

    }

    for(int i=0;i<k;i++){
        v[val[i].a].push_back(val[i].b);
        v[val[i].b].push_back(val[i].a);    
        
        }

    


    return 0;
}