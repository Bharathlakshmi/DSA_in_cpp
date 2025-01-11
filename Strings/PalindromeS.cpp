#include<iostream>
using namespace std;


//if both halves of a string are palindromes

char s[20],a1[10],a2[10],b1[10],b2[10],p1[10],p2[10];



void push2(char val);
void pop2();
void push(char val);
void pop();
int top=-1,n=0,z=0,top2=-1,j1=0;

main()
{
    int n=0,h,c=0;
    cout<<"Enter String : ";
    cin>>s;

    for(int i=0;s[i]!='\0';i++)
     {
            n++;
     }

     h=n/2;
     cout<<"h="<<h<<endl;


      for(int i=0;i<h;i++)
     {
            a1[i]=s[i];
     }


     int j=0;
     for(int i=h;i<n;i++)
     {
            a2[j]=s[i];
            j++;
     }

     cout<<a1<<endl;
     cout<<a2<<endl;



     ///////////

      for(int i=0;i<h;i++)
     {
        push(a1[i]);
     }

     for(int i=0;i<h;i++)
     {
        pop();
     }

      cout<<"Reverse string : ";


      for(int i=0;b1[i]!='\0';i++)
     {
        cout<<b1[i];
     }
      cout<<endl;


     int y=0;
     for(int i=0;i<h;i++)
     {
        if(s[i]==b1[i])
            y++;
     }
      int d=0;
      if(y==h)
            d++;

        ///////////

      for(int i=0;a2[i]!='\0';i++)
     {
        push2(a2[i]);
     }

     for(int i=0;p2[i]!='\0';i++)
     {
        pop2();
     }

      cout<<"Reverse string : ";


      for(int i=0;i<=j;i++)
     {
        cout<<b2[i];
     }
      cout<<endl;


      y=0,j=0;
     for(int i=h;i<n;i++)
     {
        if(s[i]==b2[j])
            y++;
        j++;
     }

      if(y==h)
            d++;

    if(d==2)
        cout<<"\nPalindrome\n";
    else
        cout<<"\nNot a Palindrome\n";

}

void push(char val)
{

            top=top+1;;
            p1[top]=val;

}

void pop()
{

        b1[j1]=p1[top];
        j1++;

        p1[top]=-1;
        top--;

}

void push2(char val)
{

            top2=top2+1;;
            p2[top2]=val;
            //cout<<"pop";

}

void pop2()
{

        b2[z]=p2[top2];
        z++;

        p2[top2]=-1;
        top2--;

       // cout<<"pop";

}

