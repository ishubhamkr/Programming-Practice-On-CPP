#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

struct node* head;

node* Insert(node* head, int x)
{
    node *temp = (node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        head->next = temp;
    }
    return temp;
}

node* del(node* head,int y)
{
    node* P=head;
    node* S=head;
    if(head==NULL)
        return head;
    while(S->data!=y && S->next != NULL)
    {
        head=S;
        S=S->next;
    }
    if(S->data==y)
    {
        head->next=S->next;
        free(S);
        S=NULL;

    }

    head=P;
    return head;
}


void Print(node* s)
{
    cout<<"List is:";
    while(s != NULL)
    {
        cout<<s->data;
        s = s->next;
    }
    cout<<"\n";
}



int main()
{
    node* head=NULL;
    cout<<"How many numbers: ";
    int  n,x,z;
    cin>>n;
    cout<<"Enter the number\n";
    cin>>x;
    head = Insert(head,x);
    node* s = head;
    for(int i{1};i<n;i++)
    {
        cout<<"Enter the number\n";
        cin>>x;
        head = Insert(head,x);

    }
    head=s;
    Print(s);
    cout<<"Delete the element in the linkedlist ";
    cin>>z;
    head = del(head,z);

    Print(head);

}
