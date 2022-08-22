#include<bits/stdc++.h>
using namespace std;

struct node
{
    /* data */
    int data;
    node * left , *right ;
};
node * createNode(node * root ,int data){
    node * newNode = new node ();
    newNode -> data = data ;
    newNode -> left = newNode -> right = NULL;
    return newNode ;
}

node * Insert (node * root, int data){
    if( !root ) {
        root = createNode (root ,data) ;
        return root ;
    }
     if(data <= root->data){
       root -> left = Insert(root->left,data);
    }
    else if(data > root->data)
    root -> right = Insert (root->right,data);
    
    return root;
}
bool isBSTUtil (node * root ,int min_val ,int max_val){
    if( (root -> data > min_val && root -> data < max_val) &&
    isBSTUtil (root -> left , min_val , root -> data) &&
    isBSTUtil (root -> right , root -> data , max_val) 
    ) return true;
    
     else return false;
}

bool isBinarySearchTree(node * root ){
return isBSTUtil(root , -100 , 100) ;
}
int main(){
    int n;
    cin>>n;
    node * root = NULL;
    while (n--)
    {
        /* code */
        int data;
        cin>>data;
        root = Insert( root , data) ;
    }

 if(isBinarySearchTree(root))
 cout<<"it is a binary search tree " ;
 else cout<<"not a bst" ; 
    return 0;
}