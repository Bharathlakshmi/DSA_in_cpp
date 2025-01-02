
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
    n--;
    do
    {
        cout<<"\n1.ENQUEUE 2.DEQUEUE 3.DISPLAY 4.EXIT : ";
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
    if(r==n)
        cout<<"queue overflow\n";
    else
    {
        int val;
        cout<<"Enter value : ";
        cin>>val;

        if(r==-1)
        {
            r=f=0;
            a[r]=val;
        }
        else
        {
            r++;
            a[r]=val;
        }

    }

}


void dequeue()
{
    if(f==-1)
        cout<<"queue underflow\n";
    else
    {
        if(r==f)
        {
            a[f]=-1;
            f=r=-1;
        }
        else
        {
            a[f]=-1;
            f++;
        }
    }
}

void display()
{
    cout<<"Data in Queue : ";
    for(int i=f;i<=r;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
