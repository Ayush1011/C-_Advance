#include<bits/stdc++.h>

using namespace std;
void maximizecube(int l,int b,int h)
{
    int side=__gcd(l,__gcd(b,h));

    int num=l/side;
    num=((num*b)/side);
    num=((num*h)/side);

    cout<<side<<" "<<num;
}

int main() 
{ 
    int l = 2, b = 4, h = 6; 
  
    maximizecube(l, b, h); 
    return 0; 
}