
#include<iostream>
using namespace std;

int a[10],n,f=-1,r=-1;

void display();
void enqueue();
void dequeue();

main()
{
    int ch;
    cout<<"Enter n value : ";
    cin>>n;
    do
    {
        cout<<"\n1.ENQUEUE 2.DEQUEUE 3.DISPLAY  : ";
        cin>>ch;
        switch(ch)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
        }
    }while(ch<4);
}

void enqueue()
{
    int val;
    if(f==-1)
    {
        cout<<"Enter a value : ";
        cin>>val;
        f=r=0;
        a[r]=val;
    }
    else if(f==(r+1)%n)
    {
        cout<<"Queue is FULL\n";
    }
    else
    {
        cout<<"Enter a value : ";
        cin>>val;
        r=(r+1)%n;
        a[r]=val;
    }
}
void dequeue()
{
    int s;
    if(f!=-1)
    {
        if(f==r)
        {
            s=a[f];
            a[f]=-1;
            f=r=-1;
        }
        else
        {
            s=a[f];
            a[f]=-1;
            f++;
        }
        cout<<"Deleted Value : "<<s<<endl;
    }
    else
    {
        cout<<"Queue is EMPTY\n";
    }
}
void display()
{
    cout<<"Data in Queue : ";
    if(f<=r)
    {
    for(int i=f;i<=r;i++)
        cout<<a[i]<<" ";
    }
    else
    {
        for(int i=f;i<n;i++)
            cout<<a[i]<<" ";
        for(int i=0;i<=r;i++)
            cout<<a[i]<<" ";
    }
    cout<<endl;
}

