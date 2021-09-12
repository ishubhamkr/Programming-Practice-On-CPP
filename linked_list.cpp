#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node a = {10,NULL};
    struct node b = {20,NULL};
    struct node c = {30,NULL};
    struct node d = {40,NULL};
    struct node e = {50,NULL};
    struct node f = {60,NULL};

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;

    struct node *s = &a;

    while(s->next != NULL)
    {
        cout<<s->data<<"\n";
        s = s->next;
    }
    cout<<s->data;
}
