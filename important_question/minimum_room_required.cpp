#include<bits/stdc++.h>

using namespace std;



int findMinRooms(string slots[],int n,int m)
{
    int count[m]={0};

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(slots[i][j]=='1')
            {
                count[j]++;
            }
        }

    }

    return *max_element(count,count+m);
}

int main(){
      int n = 3, m = 7; 
    string slots[n] = { "0101011", 
                        "0011001", 
                        "0110111" }; 
    cout << findMinRooms(slots, n, m); 
    return 0; 
}