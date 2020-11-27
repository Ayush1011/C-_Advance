#include <bits/stdc++.h>
using namespace std;



string repeat(string s, int n) 
{ 
    // Copying given string to temparory string. 
    string s1 = s; 
  
    for (int i=1; i<n;i++) 
        s += s1; // Concatinating strings 
  
    return s; 
} 

int main() {
    int test;
    cin>>test;
    while(test--){
        
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        
        vector<pair<int,char>>v;
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            v.push_back(make_pair((it->second/2)*2,it->first));
        }
        
        
        
        string p="";
       for(int i=0;i<v.size();i++){
           p+=repeat(v[i].second,v[i].first);
           
       }
       
       char arr[p.length()];
       int first=0;
       int second=p.length()-1;
       for(int i=0;i<p.length();i=i+2){
           
           arr[first]=p[i];
           arr[second]=p[i+1];
           first++;
           second--;
           
       }
       
       
       for(int i=0;i<p.length();i++){
           cout<<arr[i];
       }
       
       
       
    }
	//code
	return 0;
}