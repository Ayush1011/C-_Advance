#include <bits/stdc++.h> 
using namespace std; 


int main(){


    string s;
    cin>>s;
    string s1;
    cin>>s1;
    unordered_map<char,int>mp;
    unordered_map<char,int>mp1;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        mp[s1[i]]++;
    }

    string p;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        if(i->second%2!=0){
            p+=i->first;
        }
    }


    cout<<p;


}