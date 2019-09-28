#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int key;
    Node* next;
};

void push(Node** head_ref,int new_key)
{
    Node* new_node=new Node();
    new_node->key=new_key;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

bool search(Node* head,int key)
{
    Node* current=head;
    while(current!=NULL)
    {
        if(current->key==key)
            return true;
        current=current->next;
    }
    return false;
}

int main()
{
    Node* head=NULL;
    int key=31;

    push(&head,10);
    push(&head,20);
    push(&head,21);
    push(&head,25);
    push(&head,31);

    search(head,key)?cout<<"YES":cout<<"NO";
    return 0;
}
