/*
    Template
#include<iostream>
using namespace std;

int main(){

    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int d){
        this->data = d;
        this->left= NULL;
        this->right= NULL;

    }
};

node* buildTree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for nserting right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;  
}

                     //Traversal
void levelOrderTraversal(node *root){
    queue<node*>q;
    q.push(root);
    //seperator for level wise printing a node
    q.push(NULL);
    while(!q.empty()){
        node *temp = q.front();
        
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
       //cout<<temp->data<<" ";
       cout<<temp->data<<" ";     
       if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }


        
    }
}


void InorderTraversal(node* root){
if(root==NULL)
     return;

    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right); 
}


int main(){

     node *root = NULL;

     //creating a tree 
     root = buildTree(root);

     //levelOrderTraversal
     levelOrderTraversal(root);

     //Inorder Traversal
     cout<<"Inorder Traversal"<<endl;
     InorderTraversal(root);



    return 0;
}


