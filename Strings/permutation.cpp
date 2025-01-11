#include<iostream>
#include<string.h>
using namespace std;

void swapp(char *m,char *n);
void permute(char *a,int l,int r);
int b=0;

main()
{
   char str[10];
   cout<<"Enter String : ";
   cin>>str;
   int n=strlen(str);
   permute(str,0,n-1);

   cout<<"Total permutations ="<<b<<endl;
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
    {
         cout<<a<<endl;
         b++;
    }

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
