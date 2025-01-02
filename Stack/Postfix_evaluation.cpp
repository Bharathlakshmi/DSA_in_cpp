#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

int a[20],top=-1;
void push(int val);
int pop();

main()
{
    string eqn;
    int n;
    cout<<"Enter the equation : ";
    cin>>eqn;
    n=eqn.size();

    int x,y,s;


    for(int i=0;i<n;i++)
    {
        if(isdigit(eqn[i])==1)
        {
            push(eqn[i]-'0'); //yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy
        }
        else
        {
            int x=pop();
            int y=pop();
            switch(eqn[i])
            {
                case '+' :push(y+x);
                          break;
                case '-' :push(y-x);
                          break;
                case '*' :push(y*x);
                          break;
                case '/' :push(y/x);
                          break;
                case '^' :push(pow(y,x));
            }
        }

    }

    cout<<"ANSWER : "<<a[top]<<endl;
}


void push(int val)
{
    top=top+1;
    a[top]=val;

   // cout<<val<<" "<<a[top]<<" ";
}
int pop()
{
        int chumma=a[top];

        a[top]=-1;
        top=top-1;

        return chumma;
}

