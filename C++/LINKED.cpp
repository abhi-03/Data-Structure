#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

bool isEmpty(node *head)
{
    if(head==NULL)
        return true;
    else
        return false;
}

char menu()
{
    char choice;

    cout<<"MENU IS"<<endl;
    cout<<"1.ADD"<<endl;
    cout<<"2.DELETE"<<endl;
    cout<<"3.SHOW"<<endl;
    cout<<"4.EXIT"<<endl;

    cin>>choice;

    return choice;
}

void insertAsFirstElement(node *&head,node *&tail,int data)
{
    node *temp=new node;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    tail=temp;
}

void insert1(node *&head,node *&tail,int data)
{
    if(isEmpty(head))
        insertAsFirstElement(head,tail,data);
    else
    {
        node *temp=new node;
        temp->data=data;
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }
}

void remove1(node *&head,node *&tail)
{
    if(isEmpty(head))
        cout<<"THE LIST IS ALREADY EMPTY"<<endl;
    else if(head==tail)
    {
        delete head;
        head==NULL;
        tail==NULL;
    }
    else
    {
        node *temp=head;
        head=head->next;
        delete temp;
    }
}

void showList(node *current)
{
     if(isEmpty(current))
        cout<<"THE LIST IS ALREADY EMPTY"<<endl;
        else
        {
            cout<<"THE LIST CONTAINS"<<endl;
            while(current!=NULL)
            {
                cout<<current->data<<endl;
                current=current->next;
            }
        }
}

int main()
{
    node *head=NULL;
    node *tail=NULL;

    char choice;
    int data;

    do{
        choice=menu();

        switch(choice)
        {
            case '1': cout<<"ENTER THE NO"<<endl;
                      cin>>data;
                      insert1(head,tail,data);
                      break;

             case '2': remove1(head,tail);
                        break;

            case '3': showList(head);
                       break;
            default:  cout<<"System EXIT"<<endl;
        }
    }while(choice!=4);

    return 0;

}
