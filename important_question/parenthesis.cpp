
#include <bits/stdc++.h> 
using namespace std; 

bool ispar(string x)
{
    
    stack<char>s;
   
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='('||x[i]=='{'||x[i]=='[')
        {
            s.push(x[i]);
        }
        
        if(x[i]==')')
        {
            if(s.empty()==false&&s.top()=='(')
            {
                s.pop();
            }else{
                return false;
                
            }
            
            
        }
        
       if(x[i]=='}')
        {
            if(s.empty()==false&&s.top()=='{')
            {
                s.pop();
            }else{
                return false;

            }
            
            
        }
        
        
        
        if(x[i]==']')
        {
            if(s.empty()==false&&s.top()=='[')
            {
                s.pop();
            }else{
               return false;

            }
            
            
        }
    }
    
    
    
        if(s.empty()==true)
        {
            return true;
        }else{
            return false;
        }
    

    
}




int main() 
{ 
    string expr = "())"; 
  
    // Function call 
    if (ispar(expr)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
    return 0; 
} 