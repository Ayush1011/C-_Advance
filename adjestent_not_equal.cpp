#include <bits/stdc++.h> 
using namespace std; 


void rearrangeString(string s)
{
    deque<pair<int,char>>g;
    
    unordered_map<char,int>mp;

    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }


    for(auto i=mp.begin();i!=mp.end();i++)
    {
        g.push_back(make_pair(i->second,i->first));
    }


    sort(g.begin(),g.end());
    string str="";
    while(!g.empty())
    {

        if(g.back().first!=0)
        {
             str+=g.back().second;
            g.back().first--;
        }else{
            g.pop_back();
        }

        
        // if(g.front().first!=0)
        // {
        //     str+=g.front().second;
        //     g.front().first--;
        // }else{
        //     g.pop_front();
        // }

        
    }

    cout<<str;


}


int main() 
{ 
    string str = "bbbaa" ; 
    rearrangeString(str); 
    return 0; 
} 