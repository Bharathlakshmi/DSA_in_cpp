#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *adrs;
}node;

node *head,*temp;

node* getnode();
void display();
void reversell(node *current,node *nextt);

main()
{

    node *p1;
    int n,i;
    head=NULL;
    cout<<"Enter no. of values in list : ";
    cin>>n;
    head=NULL;

    for(int i=0;i<n;i++)
    {
        p1=getnode();
        if(head==NULL)
        {
            head=p1;
            temp=p1;
        }
        else
        {
            temp->adrs=p1;
            temp=p1;
        }
    }

    cout<<"Data in Linked List : ";
    display();

    cout<<"Reversed Linked List : ";
    reversell(head,head->adrs);
    display();
}

void display()
{
    node *t;
    t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->adrs;
    }
     cout<<endl;
}

void reversell(node *current, node *nextt)
{
    node *t,t1;

    if(nextt==NULL)
      {
        head=current;
        return;
      }
    if(current == head)
      {
        t=nextt;
        nextt=nextt->adrs;
        t->adrs=current;
        current->adrs=NULL;
     }
    else
     {
        t=nextt;
        nextt=nextt->adrs;
        t->adrs=current;
     }
    reversell(t,nextt);

}













node* getnode()
{
    node *p;
    p=(node*)malloc(sizeof(node));
    int val;
    cout<<"Enter one value : ";
    cin>>val;
    p->data=val;
    p->adrs=NULL;
    return p;
}
