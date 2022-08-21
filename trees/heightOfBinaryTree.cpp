#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left , *right;
};
node * createNode(node * root , int data){
    node * newNode = new node();
    newNode -> data = data;
    newNode -> left = newNode -> right = NULL ;

    return newNode; 
}

node * Insert(node * root,int data){
    if(!root) {
        root = createNode(root,data);
        return root;
    }
    if(root -> data >= data)
    root -> left = Insert(root -> left,data);
    else
    root -> right = Insert(root -> right,data);

    return root;
}
int findHeight(node * root){
    if(!root) return -1;
    int leftHeight =  findHeight(root -> left);
    int rightHeight = findHeight(root -> right);
    return max(leftHeight,rightHeight) + 1;
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
    cout<<"height is "<<findHeight(root);
}
