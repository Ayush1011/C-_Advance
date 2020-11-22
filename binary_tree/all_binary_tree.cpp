#include <iostream>
#include <queue>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;

};


Node* createNode(int data){

     Node* newNode = new Node();

     newNode->data=data;
     newNode->left=newNode->right=NULL;

     return newNode;


}


Node* InsertNode(Node* root, int data)
{
    if(root==NULL){
        root=createNode(data);
        return root;
    }


    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        Node *temp=q.front();
        q.pop();
        
        if(temp->left!=NULL){
             q.push(temp->left);
        }
        else{
            temp->left=createNode(data);
            return root;
        }



        if(temp->right!=NULL){
             q.push(temp->right);
        }
        else{
            temp->right=createNode(data);
            return root;
        }



    }


}




void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}




Node* insert_binary(Node* root,int data)
{
    

        if(root==NULL){
        root=createNode(data);
        return root;
    }


    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        Node *temp=q.front();
        q.pop();
        
        if(temp->left->data>data && temp->left!=NULL){
             q.push(temp->left);
        }
        else{
            temp->left=createNode(data);
            return root;
        }



        if(temp->right->data<data&&temp->right!=NULL){
             q.push(temp->right);
        }
        else{
            temp->right=createNode(data);
            return root;
        }



    }
        
}


int main(){


    Node* root = createNode(4);
    root = insert_binary(root,5);
    root = insert_binary(root,7);

   

    inorder(root);
    return 0;
}