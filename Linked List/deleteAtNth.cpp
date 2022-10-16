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
node * deleteNode(node * head, int x){
    node * dummy = head ;
    while (dummy -> data != x)
    {
        /* code */
        dummy = dummy -> next;
    }
    node * dummy1 = head;
    while (dummy1 -> next != dummy)
    {
        /* code */
        dummy1 = dummy1 -> next;
    }
    dummy1 -> next = dummy -> next;
    delete dummy;

    return head;
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
    cout << endl;
    cout << "insert the node data to be deleted \n";
    int x;
    cin >> x;
    
    cout << endl;
    head = deleteNode(head,x);
    displayList(head);
}