#include<iostream>
#include<string.h>
using namespace std;

void swapp(char *m,char *n);
void permute(char *a,int l,int r);

main()
{
   char str[10],s[10];
   cout<<"Enter String : ";
   cin>>str;
   int m=1,n,t;
   n=strlen(str);
   int i;
   do
   {
     for( i=0;i<m;i++)
    {
       s[i]=str[i];
    }

     t=strlen(s);
     permute(s,0,t-1);
     m++;

   }while(m<=n);
}

void swapp(char *m,char *n)
{
    char t;
    t=*m;
    *m=*n;
    *n=t;
}
void permute(char *a,int l,int r)
{
    if(l==r)
        cout<<a<<endl;
    else
    {
        for(int i=l;i<=r;i++)
        {
            swapp((a+l),(a+i));
            permute(a,l+1,r);
            swapp((a+l),(a+i));
        }
    }
}


