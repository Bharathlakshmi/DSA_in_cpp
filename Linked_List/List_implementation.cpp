#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *adrs;
}node;

node *head,*temp;
node* getnode();
void inslast();
void dltlast();
void insfront();
void dltfront();
void insmiddle();
void dltmiddle();
void searching();
void display();

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

    cout<<"Data in Linked List : ";
    t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->adrs;
    }
    cout<<endl;


    do
    {
        cout<<"\n1.Insert  2.Delete  3.Search  4.Display : ";
        cin>>opt;
        if(opt==1)
        {
            cout<<"\n1.Insert Last  2.Insert Front  3.Insert Middle : ";
            cin>>opt2;

            switch(opt2)
            {
                case 1:inslast();
                        break;
                case 2:insfront();
                        break;
                case 3:insmiddle();
                        break;
            }
        }
        if(opt==2)
        {
            cout<<"\n1.Delete Last  2.Delete Front  3.Delete Middle : ";
            cin>>opt2;

            switch(opt2)
            {
                case 1:dltlast();
                        break;
                case 2:dltfront();
                        break;
                case 3:dltmiddle();
                        break;
            }
        }
        if(opt==3)
        {
            searching();
        }
        if(opt==4)
        {
            display();
        }
    }while(opt<5);

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

void inslast()
{
    node *z;
    z=getnode();
    temp->adrs=z;
    temp=z;
}

void insfront()
{
    node *frontt;
    frontt=getnode();
    frontt->adrs=head;
    head=frontt;
}

void insmiddle()
{
     node *tmp,*neww;
    int pos,c=1;
    cout<<"Enter position : ";
    cin>>pos;
    neww=getnode();


    tmp=head;

    while(c<pos-1 && tmp!=NULL)
    {
        tmp=tmp->adrs;
        c++;
    }
    neww->adrs=tmp->adrs;
    tmp->adrs=neww;
}

void dltlast()
{
    node *tmpy,*prev;
    tmpy=head;
    while(tmpy->adrs!=NULL)
    {
        prev=tmpy;
        tmpy=tmpy->adrs;
    }
    temp=prev;
    temp->adrs=NULL;

    tmpy->adrs=NULL;
    free(tmpy);
}

void dltfront()
{
    node *tp;
    tp=head;
    head=head->adrs;

    tp->adrs=NULL;
    free(tp);
}

void dltmiddle()
{
    node *tp,*prev;
    tp=head;
    int pos,c=1;
    cout<<"Enter position : ";
    cin>>pos;

    while(tp!=NULL && c<pos)
    {
        prev=tp;
        tp=tp->adrs;
        c++;
    }
    prev->adrs=tp->adrs;

    tp->adrs=NULL;
    free(tp);
}

void searching()
{
    int elt,c=1,c2=0;
    node *t1;
    t1=head;
    cout<<"Enter element to be searched : ";
    cin>>elt;

    while(t1!=NULL)
    {
        if(t1->data==elt)
        {
             cout<<"The element is present at position '"<<c<<"'"<<endl;
             c2=1;
        }

        c++;
        t1=t1->adrs;
    }
    if(c2==0)
        cout<<"The element is NOT PRESENT at the list\n";
}

void display()
{
    node *t2;
    t2=head;
    while(t2!=NULL)
    {
        cout<<t2->data<<" ";
        t2=t2->adrs;
    }
}
