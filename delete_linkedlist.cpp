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

void del(node** head_ref)
{
    node* current = *head_ref;
    node* next = NULL;
    while(current != NULL)
    {
        next=current->next;
        delete current;
        current = next;
    }
}

int main()
{
    node* head=NULL;
    cout<<"How many numbers";
    int  n,x,y;
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
    Print(s);
    head=s;
    del(&head);
    if(head==NULL)
        cout<<"NO LinkedList available";
    else
    {
        Print(head);
    }
}
