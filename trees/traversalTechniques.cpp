#include<iostream>
using namespace std;

struct node
{
    /* data */
    char data;
    node * left;
    node * right;
};

node * createNode ( char data ){
    node * newNode = new node ();
    newNode -> data = data ;
    newNode -> left = newNode -> right = NULL ;
    return newNode ;
}
node * Insert (node * root ,char data)
{
    if( !root ) {
        root = createNode(data) ;
        return root ;
    }
    if(data <= root -> data) {
        root -> left = Insert(root -> left , data) ;
    }
    else if(data > root -> data)
    {
        root -> right = Insert( root -> right , data );
    }
    return root ;
}
void preorder (node * root){
    if( !root ) return ;
    cout<<root->data<<" -> ";
    preorder(root -> left) ;
    preorder(root -> right) ;
}
void inorder (node * root){
    if( !root ) return ;
    
    inorder(root -> left) ;
    cout<<root->data<<" -> ";
    inorder(root -> right) ;
    
}
void postorder (node * root){
    if( !root ) return ;
    
    postorder(root -> left) ;
    postorder(root -> right) ;
    cout<<root->data<<" -> ";
}

int main(){
    int n;
    cin>>n;
    node * root = NULL;
    while (n--)
    {
        /* code */
        char data;
        cin>>data;
        root = Insert( root , data) ;
    }
    cout<<"Preorder traversal ";
    preorder(root) ;
    cout<<endl;
    cout<<"Inorder traversal ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder traversal " ;
    postorder(root) ;
    return 0;
}





