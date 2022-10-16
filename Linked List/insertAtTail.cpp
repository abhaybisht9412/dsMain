#include<iostream>
using namespace std;

struct node
{
    /* data */
    int data;
    node * next = NULL ;
};

node* insertNode (node * head , int data){
    
    node * newNode = new node ;
    newNode -> data = data ;
    newNode -> next = NULL ;

    if(!head) {
        head = newNode ;
        return head;
    }
    node* dummy = head ;
    while (dummy -> next != NULL)
    {
        /* code */
        dummy = dummy -> next ;
    }
    dummy -> next = newNode ;
   

    return head ;
}

void displayList(node * head){
    while (head)
    {
        /* code */
        cout << head -> data << " ";
        head = head -> next;
    }
    
}

int main() {
    node * head = NULL ;
    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        int x;
        cin >> x;
        head = insertNode(head,x);
    }
    
    displayList(head);
}