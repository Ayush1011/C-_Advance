#include<bits/stdc++.h>

using namespace std;

bool areBookingsPossible(int arrival[], 
                         int departure[], int n, int k)
{
    vector<pair<int,int>>ans;
for (int i = 0; i < n; i++) { 
        ans.push_back(make_pair(arrival[i], 1)); 
        ans.push_back(make_pair(departure[i], 0)); 
    } 


    sort(ans.begin(),ans.end());

    int curr=0;
    int max_ac=0;

    for(int i=0;i<ans.size();i++)
    {
        if(ans[i].second==1)
        {

            curr++;
            max_ac=max(max_ac,curr);
        }else{
            curr--;
        }
    }

    return(k>=max_ac);

}



int main() 
{ 
    int arrival[] = { 1, 3, 6 }; 
    int departure[] = { 2, 6, 8 }; 
    int n = sizeof(arrival) / sizeof(arrival[0]); 
    cout << (areBookingsPossible(arrival, 
                                 departure, n, 1) 
                 ? "Yes\n"
                 : "No\n"); 
    return 0; 
} 