#include<bits/stdc++.h>

using namespace std;


int main(){

    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    for(int i=a;i<=b;i++){
        if(i%c==0)
        {
            count++;
        }
    }

    cout<<count<<endl;
}