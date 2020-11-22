




#include <bits/stdc++.h> 
using namespace std; 
  
/* A binary tree node has data, left  
child and right child */
struct node 
{ 
    int data; 
    struct node* left; 
    struct node* right; 
}; 


struct node* newNode(int data) 
{ 
    struct node* node = 
        (struct node*)malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    return node; 
} 






int isSumProperty(node* root){


       int left_sum,right_sum;
       if(root==NULL||root->left==NULL||root->right==NULL){
           return 1;
       }
       else{
           if(root->left!=NULL){
                left_sum=root->left->data;
           }
           if(root->left!=NULL){
                right_sum=root->right->data;    
             }


             if(left_sum+right_sum==root->data&&isSumProperty(root->left)&&isSumProperty(root->right)){
                 return 1;
             }
             else{
                 return 0;
             }
          
          

       }

}
  
// Driver Code 
int main() 
{ 
    struct node *root = newNode(10); 
    root->left     = newNode(8); 
    root->right = newNode(2); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
    root->right->right = newNode(2); 
    if(isSumProperty(root)) 
        cout << "The given tree satisfies "
            << "the children sum property "; 
    else
        cout << "The given tree does not satisfy "
            << "the children sum property "; 
  
    getchar(); 
    return 0; 
} 