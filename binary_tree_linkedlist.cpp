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
        node* S = (node*)malloc(sizeof(struct node));
        S->data=y;
        Insert(&head,&S);
    }

}
