#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left , *right;
};
bool isRightGreater (node * root ,int value);
bool isLeftLesser (node * root ,int value);


node * createNode(node * root ,int data){
    node * newNode = new node ();
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

node * Insert(node *root ,int data){
    if(!root) {
        root = createNode(root,data);
        return root;
    }
    if(data <= root->data){
       root -> left = Insert(root->left,data);
    }
    else if(data > root->data)
    root -> right = Insert (root->right,data);
    
    return root;
}
bool isRightGreater (node * root ,int value) {
    if(!root) return true;
    if( (value < root -> data) &&
        isLeftLesser( root -> left , value) &&
        isRightGreater( root -> right , value)
     ) return true;
     else return false;
}
bool isLeftLesser (node * root ,int value) {
    if(!root) return true;
    if( (value >= root -> data) &&
        isLeftLesser( root -> left , value) &&
        isRightGreater( root -> right , value)
     ) return true;
     else return false;
}


bool isBinarySearchTree(node * root){
    if( isLeftLesser(root -> left,root -> data) && 
        isRightGreater(root -> right ,root -> data) &&
        isBinarySearchTree(root ->left) &&
        isBinarySearchTree(root -> right) 
        ) 
        return true ;
        else return false ;
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
    cout<<isBinarySearchTree(root) ;
    return 0;
}