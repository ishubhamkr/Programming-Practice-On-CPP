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

node* add(node* head,int x)
{
    node *temp = (node*)malloc(sizeof(struct node));
    node* P=head;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return head;
    }

    if(head->next==NULL)
    {
        head->next=temp;
        return head;
    }
    while(head->next->next!=NULL)
    {
        head=head->next;
    }
    head->next->next=temp;
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
    y=count_len(head);
    cout<<"\nLength of the linkedlist: "<<y<<"\n";

    cout<<"enter the element";
    cin>>z;
    head = add(head,z);

    Print(head);

}
