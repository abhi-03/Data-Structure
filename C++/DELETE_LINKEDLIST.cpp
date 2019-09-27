#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

void push(Node** head_ref,int new_data)
{
    Node* new_node=new Node();
     new_node->data=new_data;
     new_node->next=(*head_ref);
     *head_ref=new_node;
}

void deleteNode(Node** head_ref,int key)
{
    Node* temp=*head_ref,*prev;
    if(temp!=NULL&&temp->data==key)
    {
        *head_ref=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
      if(temp==NULL)
        return;

      prev->next=temp->next;
      free(temp);
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main()
{
    Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    cout<<"Created Linked List: "<<endl;
    printList(head);
    deleteNode(&head, 1);
    cout<<"\nLinked List after Deletion of 1: "<<endl;
    printList(head);
    return 0;
}
