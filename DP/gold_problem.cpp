#include<bits/stdc++.h> 

using namespace std;
#define MAX 100
int getMaxGold(int arr[][MAX],int n,int m){

    int goldtable[m][n];
    memset(goldtable,0,sizeof(goldtable));


    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++)
        {
            int right=(i==m-1)?0:goldtable[i][j+1];


            int rightup = (i==0||j==m-1)?0:goldtable[i-1][j+1];
            int rightdown = (i==n-1||j==m-1)?0:goldtable[i+1][j+1];

                        goldtable[i][j]= goldtable[i][j]+max(right,max(rightup,rightdown));

        }



    }
int res = goldtable[0][0]; 
    for (int i=1; i<m; i++) 
        res = max(res, goldtable[i][0]); 
    return res;
        




}
int main(){
    int gold[MAX][MAX]= { {1, 3, 1, 5}, 
        {2, 2, 4, 1}, 
        {5, 0, 2, 3}, 
        {0, 6, 1, 2} 
    }; 
    int m = 4, n = 4; 
    cout << getMaxGold(gold, m, n); 
    return 0; 
}