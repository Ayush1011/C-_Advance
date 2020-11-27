#include<bits/stdc++.h>

using namespace std;


void findTwoGroup(int n)
{
    int group1=0;
    int group2=0;

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;

    }
    if(sum%2==0)
    {
        group1=sum/2;
        group2=sum/2;
    }else{
        group1=(sum-1)/2;
        group2=(sum+1)/2; 
    }

    vector<int>v;
    vector<int>v1;
    for(int i=n;i>0;i--)
    {
        if(group1-i>=0)
        {
            group1-=i;
            v.push_back(i);
        }else{
             group2-=i;
            v1.push_back(i);
        }
    }





        cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
            cout<<v1.size()<<endl;

  for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }


}


int main() 
{ 
    int n = 5; 
    findTwoGroup(n); 
    return 0; 
} 