#include<bits/stdc++.h>

using namespace std;
int calculate(int arr[],int n)
{
    sort(arr,arr+n);

    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(arr[i],arr[n-i-1]));
    }

    int mins=INT_MAX;
    int maxs=0;
    for(auto i=v.begin();i!=v.end();i++)
    {
        if(i->first+i->second<mins)
        {
            mins=i->first+i->second;
        }
        if(i->first+i->second>maxs)
        {
            maxs=i->first+i->second;
        }
    }

    return maxs-mins;

}

int main() 
{ 
    int a[] = { 2, 6, 4, 3 }; 
    int n = sizeof(a) / (sizeof(a[0])); 
    cout << calculate(a, n) << endl; 
    return 0; 
} 