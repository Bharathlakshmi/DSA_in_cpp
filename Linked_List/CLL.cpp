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
void insfrontt();

main()
{
   node *p1,*t;
    int n,i,opt,opt2;
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
    temp->adrs=head;
    display();


    insfrontt();
    display();
}



void insfrontt()
{
     node *neww;
     cout<<"to insert in front..........\n";
     neww=getnode();
     temp->adrs=neww;
     neww->adrs=head;
     head=neww;
}


node* getnode()
{
    int val;
    node *p;
    p=(node*)malloc(sizeof(node));
    cout<<"Enter one value : ";
    cin>>val;
    p->data=val;
    p->adrs=NULL;
    return p;
}
void display()
{
    cout<<"Data in Linked List : ";
    int c=0;
    node *t2;
    t2=head;
    while(t2!=head || c==0)
    {
        cout<<t2->data<<" ";
        t2=t2->adrs;
        c++;
    }
    cout<<endl;
}
