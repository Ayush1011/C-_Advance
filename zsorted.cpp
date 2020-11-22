#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    
    
    vector<int>front;
    vector<int>back;

    sort(arr,arr+n);

    for(int i=0;i<n/2;i++)
    {
        front.push_back(arr[i]);
    }
    for(int i=n/2;i<n;i++)
    {
        back.push_back(arr[i]);
    }
    
   

    sort(back.begin(),back.end(),greater<int>());

    int final[n];

    bool istrue=false;
    
    
    
    int aaga=0;
    int picha=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
            final[i]=front[aaga];
            
           aaga++;
        }else{
           final[i]=back[picha];
           picha++;

        }

       
        
        }
    


    
    

    for(int j=0;j<n;j+2)
       {
         if(j%2==0)
        {
            if(final[j]>=final[j-1])
            {
                continue;
            }else{
                istrue=true;
                break;
            }
        }else{

            if(final[j]<=final[j-1])
            {
                continue;
            }else{
                istrue=true;
                break;
            }
       }
       }
if(istrue)
    {
        cout<<"Impossible";
    }else
    {
      for(int i=0;i<n;i++)
      {
          cout<<final[i]<<" ";
      }
    }





}