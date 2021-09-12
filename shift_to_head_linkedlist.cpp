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

node* shift(node* head)
{
    if(head==NULL)
        return head;
    if(head->next==NULL)
        return head;
    node* P=head;
    while(head->next->next!=NULL)
    {
        head=head->next;
    }
    head->next->next=P;
    P=head->next;
    head->next=NULL;
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


int count_len(node* s)
{
    int coun =0;
    while(s!= NULL)
    {
        coun++;
        s=s->next;
    }
    return coun;
}


int main()
{
    node* head=NULL;
    int y;
    cout<<"How many numbers: ";
    int  n,x;
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
    y=count_len(head);
    cout<<"\nLength of the linkedlist: "<<y<<"\n";
    head = shift(head);

    Print(head);

}
