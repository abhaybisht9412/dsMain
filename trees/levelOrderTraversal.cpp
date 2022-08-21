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

void levelOrderBfs (node * root) {
    if( !root ) return; 
    queue< node *> q;
    q.push(root) ;
    while (!q.empty())
    {
        /* code */
        node * curr = q.front ();
        cout<< curr -> data <<" " ;
        if( curr -> left ) q.push(curr -> left);
        if(curr -> right) q.push(curr -> right) ;
        q.pop();
    }
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
    cout<<"level order traversal ";
    levelOrderBfs(root);
}