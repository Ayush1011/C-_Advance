
#include <bits/stdc++.h>
using namespace std;


struct Node  
{ 
    int data; 
    struct Node* left; 
    struct Node* right; 
}; 
  
/* Helper function that allocates a new node with  
the given data and NULL left and right pointers. */
struct Node* newNode(int data) 
{ 
    struct Node* node = (struct Node*) 
                         malloc(sizeof(struct Node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
      
    return(node); 
} 



void mirror(Node* root){
    if(root==NULL){
        return;
    }

    mirror(root->left);
    mirror(root->right);

    Node* temp=root->left;
    root->left=root->right;
    root->right=temp;
}





void inOrder(struct Node* node)  
{ 
    if (node == NULL)  
        return; 
      
    inOrder(node->left); 
    cout << node->data << " "; 
    inOrder(node->right); 
}  


int main() 
{ 
    struct Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5);  
      
    /* Print inorder traversal of the input tree */
    cout << "Inorder traversal of the constructed"
         << " tree is" << endl; 
    inOrder(root); 
      
    /* Convert tree to its mirror */
    mirror(root);  
      
    /* Print inorder traversal of the mirror tree */
    cout << "\nInorder traversal of the mirror tree"
         << " is \n";  
    inOrder(root); 
      
    return 0;  
} 