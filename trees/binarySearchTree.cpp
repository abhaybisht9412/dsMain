#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left , *right;
};

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

bool searchNode(node *root, int data){
    if(!root) return false;
    else if(root -> data == data)
    return true;
    else if( data > root -> data )
    {
        searchNode(root -> right,data);
    }
    else if(data < root->data )
    searchNode(root -> left,data);

    return true;
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

    int searchElement ;
    cin>>searchElement;
    cout<<searchNode(root, searchElement);

    return 0;
}