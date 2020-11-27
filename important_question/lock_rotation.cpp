
#include<bits/stdc++.h>

using namespace std;


int minRotation(string input,string unlock)
{
    int ans=0;
    for(int i=0;i<input.length();i++)
    {
        int ia = input[i] - '0';
        int pa = unlock[i] - '0';

        ans+=min(abs(ia-pa),10-abs(ia-pa));

    }

    return ans;
}




int main() 
{ 
    string input = "28756"; 
    string unlock_code = "98234"; 
    cout << "Minimum Rotation = "
        << minRotation(input, unlock_code); 
    return 0; 
} 