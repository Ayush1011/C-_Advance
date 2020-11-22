
#include <bits/stdc++.h>
using namespace std;


class node  
{  
    public: 
int data;  
node *left;  
node *right;  
};  




void printInorder(node* Node)  
{  
    if (Node == NULL)  
        return;  
    printInorder(Node->left);  
    cout<<" "<<Node->data;  
    printInorder(Node->right);  
}  
  
/* Utility function to create a new Binary Tree node */
node* newNode(int data)  
{  
    node *temp = new node;  
    temp->data = data;  
    temp->left = NULL;  
    temp->right = NULL;  
      
    return temp;  
}  

int toSumTree(node* root){

    if(root==NULL){
        return 0;
    }

    int old=root->data;

    root->data=toSumTree(root->left)+toSumTree(root->right);

    return root->data+old;


    
}
  
/* Driver code */
int main()  
{  
    node *root = NULL;  
    int x;  
      
    /* Constructing tree given in the above figure */
    root = newNode(10);  
    root->left = newNode(-2);  
    root->right = newNode(6);  
    root->left->left = newNode(8);  
    root->left->right = newNode(-4);  
    root->right->left = newNode(7);  
    root->right->right = newNode(5);  
      
    toSumTree(root);  
      
    // Print inorder traversal of the converted 
    // tree to test result of toSumTree()  
    cout<<"Inorder Traversal of the resultant tree is: \n";  
    printInorder(root);  
    return 0;  
}  