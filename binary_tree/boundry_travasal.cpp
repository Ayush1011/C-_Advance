#include <bits/stdc++.h>
using namespace std;


struct node { 
    int data; 
    struct node *left, *right; 
}; 
  

  struct node* newNode(int data) 
{ 
    struct node* temp = (struct node*)malloc(sizeof(struct node)); 
  
    temp->data = data; 
    temp->left = temp->right = NULL; 
  
    return temp; 
} 


void printLeaf(node* root){
    if(root==NULL){
        return;
    }

    printLeaf(root->left);

    if (!(root->left) && !(root->right)) 
        printf("%d ", root->data);

    printLeaf(root->right);    

        
}

void printLeft(node* root){

    if(root==NULL)
    {
        return;
    }
    if(root->left)
        {
            cout<<root->data<<" ";
        printLeft(root->left);
        }
        else if(root->right){
            cout<<root->data<<" ";
        printLeft(root->right);

        }
}




void printRight(node* root){

    if(root==NULL)
    {
        return;
    }
    if(root->right)
        {
            cout<<root->data<<" ";
        printLeft(root->right);
        }
        else if(root->left){
            cout<<root->data<<" ";
      

        }
}


void printBoundary(node* root)
{

    cout<<root->data<<" ";
    printLeft(root->left);
    printLeaf(root->left);
        printLeaf(root->right);


}





int main() 
{ 
    // Let us construct the tree given in the above diagram 
    struct node* root = newNode(20); 
    root->left = newNode(8); 
    root->left->left = newNode(4); 
    root->left->right = newNode(12); 
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 
    root->right = newNode(22); 
    root->right->right = newNode(25); 
  
    printBoundary(root); 
  
    return 0; 
} 