
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
    int data,priority;
    struct node *next;
}node;
node *head=NULL;

void insertt();
void deleting();
void display();
node* getnode();
main()
{
    int ch;
    do
    {
        cout<<"1.Insert  2.Delete  3.Display  4.Exit\nchoice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:insertt();
            break;
            case 2:deleting();
            break;
            case 3:display();
        }
    }while(ch!=4);
}
void insertt()
{
    node *neww=getnode();

    if(head==NULL || (neww->priority)>(head->priority))
    {
        neww->next=head;
        head=neww;
    }
    else
    {
        node *q;
        q=head;
        if(q->next!=NULL && (q->next->priority)>=neww->priority)
        {
            q=q->next;
        }
        neww->next=q->next;
        q->next=neww;
    }
}
node* getnode()
{
    int val,prior;
    node *p;
    p=(node*)malloc(sizeof(node));
    cout<<"Enter a value      : ";
    cin>>val;
    cout<<"Enter the priority : ";
    cin>>prior;
    p->data=val;
    p->priority=prior;
    p->next=NULL;
    return p;
}
void deleting()
{
    node *t;
    t=head;
    head=head->next;
    t->next=NULL;
    free(t);
}
void display()
{
    cout<<"Priority  Data\n";
    node *t=head;
    while(t!=NULL)
    {
        cout<<"   "<<t->priority<<"       "<<t->data<<endl;
        t=t->next;
    }
}
