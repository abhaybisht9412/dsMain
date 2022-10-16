#include "iostream"
using namespace std;

struct node
{
    /* data */
    int data ;
    node * next ;
};

node *  insertNode (node * head ,int data){
    node * newNode = new node ;
    newNode -> data = data ;
    if(!head) {
        newNode -> next = NULL ;
        head = newNode ;
        return head ;
    }
    newNode -> next = head;
    head = newNode;
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
    
    displayList(head);
}