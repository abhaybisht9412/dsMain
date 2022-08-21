#include<iostream>
using namespace std;


struct node{
    int data;
    struct node *left ,*right ;
};

node * createNode ( int data){
    node * newNode = new node ();
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

node * Insert(node *root ,int data){
    if(!root) 
    {
        root = createNode(data);
        return root;
    }
    if(data <= root -> data)
   root -> left =  Insert(root -> left, data);
    else if(data > root -> data)
    root -> right = Insert (root -> right ,data );

    return root; 
}

int findMax(node *root ){

    if(!root) return -1;
    else if(!root -> right) return root -> data;
    return findMax(root -> right) ;
}
int findMin(node *root ){

    if(!root) return -1;
    
   else  if(!root -> left) return root -> data;
    
    return findMin(root -> left);
}


int main(){
    int n;
    cin>>n;
    node * root = NULL;
    while(n--){
        int data;
        cin>>data;
        root = Insert(root,data);
    }
    cout<<"min is " <<findMin(root)<<endl;
    cout<<"max is " <<findMax(root)<<endl;
}