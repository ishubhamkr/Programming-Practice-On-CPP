#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *prev;
    int data;
    node *next;
};

struct node* head;

node* Insert(node** head, int x)
{
    node* S = (node*)malloc(sizeof(struct node));
    S->next=NULL;
    S->prev= *head;
    (*head)->next=S;
    S->data=x;

}

int main()
{
    int n,y;
    cin>>n;
    cin>>y;
    node*head=(node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=y;
    head->next=NULL;
    n=n-1;
    node *p = head;
    while(n--)
    {
        cin>>y;
        p=Insert(&p,y);
    }
    while(head!=NULL)
    {
        cout<<head->data<<"\n";
        head=head->next;
    }
    while(p!=NULL)
    {
        cout<<p->data<<"\n";
        p=p->prev;
    }

}
