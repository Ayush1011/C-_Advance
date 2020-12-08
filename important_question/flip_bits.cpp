#include <bits/stdc++.h> 
using namespace std; 
int val[32];
void bin(unsigned n)
{
    int p=0;
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? val[p++]=1 : val[p++]=0;
}

long long binaryToDecimal(string n)
{
    string num = n;
    long long dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long base = 1;
 
    long long len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

int main(){

    int test;
    cin>>test;
    while(test--){
        long long n;
        cin>>n;
        


    

       bin(n);
       string s="";

       for(int i=0;i<32;i++){
           if(val[i]==1)
           {
               val[i]=0;
           }else{
               val[i]=1;
           }
           s+=std::to_string(val[i]);
       }

       cout<<binaryToDecimal(s)<<endl;


    }

    return 0;
}