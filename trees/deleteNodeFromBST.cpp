#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left,*right;
    /* data */
};
void traverse(node * root){
    queue <node * > q;
    q.push( root );
    while (!q.empty())
    {
        /* code */
        node * curr = q.front();
        cout<<curr -> data <<" ";
        if(curr -> left) q.push(curr -> left);
        if( curr -> right ) q.push( curr -> right );
        q.pop();
    }
}
node * createNode (node * root, int data){
    node * newNode = new node ();
    newNode -> data = data ;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode ;
}
node * Insert ( node * root , int data){
    if(!root) {
        root = createNode(root ,data);
        return root ;
    }
    else if( data > root -> data ){
        root -> right = Insert(root -> right , data) ;
    }
    else if(data <= root -> data) {
        root -> left = Insert (root -> left ,data );
    }
    return root ;
}
node * findMin (node * root ){
    if(!root) return root;
    if( !root -> left ) return root ;
    return findMin(root -> left) ; 
}
node * deleteNode ( node * root ,int data) {
    if( !root ) return root ;
    if( data > root -> data)
    root -> right = deleteNode (root -> right ,data );
    else if(data < root -> data)
    root -> left = deleteNode (root -> left , data) ;
    else{ //found node 
        if( !root -> left && !root -> right ){
            node * temp = root ;
            root = NULL;
            delete temp ;
            return root ;
        }
        else if( !root -> right){
            node * temp = root ;
            root = root -> left ;
            delete temp ;
            return root ;
        }
        else if(!root -> left){
            node * temp = root ;
            root = root -> right;
            delete temp;
            return root;
        }
        else{ //two children
            node * temp = findMin (root -> right);
            root -> data = temp -> data;
            root -> right  = deleteNode(root -> right , data) ;
            return root ;
        }
    }
    return root ;
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
    cout<<"Before deleting BFS -> " ;
    traverse(root);
  root =  deleteNode(root,15);
    cout<<"after deleting BFS -> ";
    traverse(root) ;

    return 0;
}