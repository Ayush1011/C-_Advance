#include <bits/stdc++.h>
using namespace std;

class node 
{ 
    public:
    int data; 
    node* left, *right; 
}; 


int height(node* node) 
{ 
    if (node == NULL) 
        return 0; 
    else
    { 
        /* compute the height of each subtree */
        int lheight = height(node->left); 
        int rheight = height(node->right); 
 
        /* use the larger one */
        if (lheight > rheight) 
            return(lheight + 1); 
        else return(rheight + 1); 
    } 
} 



void printLO(node* root,int height){

        if(root==NULL){
            return;
        }
        if(height==1){
            cout<<root->data;
        }else if(height>1){
            printLO(root->left,height-1);
            printLO(root->right,height-1);
        }

}


void printLevelOrder(node* root)
{

    int h=height(root);
    for(int i=1;i<=h;i++){
        printLO(root,i);
    }
}

void printLevelOrderR(node* root)
{

    int h=height(root);
    for(int i=h;i>=1;i--){
        printLO(root,i);
    }
}

node* newNode(int data) 
{ 
    node* Node = new node();
    Node->data = data; 
    Node->left = NULL; 
    Node->right = NULL; 
 
    return(Node); 
} 
 
/* Driver code*/
int main() 
{ 
    node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
 
    cout << "Level Order traversal of binary tree is \n"; 
    printLevelOrder(root); 
        printLevelOrderR(root); 
    return 0; 
} 