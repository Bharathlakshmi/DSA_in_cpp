#include<iostream>
#include<string.h>
using namespace std;

void swapp(char *m,char *n);
void permute(char *a,int l,int r);
//char* p[30];
int y=0,c=0;
char s1[20],s2[20];

main()
{
   //char s1[10],s2[10];

   cout<<"Enter String : ";
   cin>>s1;
   cout<<"Enter String : ";
   cin>>s2;

   int m,n;
   n=strlen(s1);
   m=strlen(s2);
   if(m!=n)
    cout<<"Enter strings of equal length : ";

    permute(s1,0,n-1);
    cout<<endl;

    if(c>0)
        cout<<" YES.    2 Strings are permutations of each other\n ";
    else
         cout<<"NO.   2 Strings are NOT permutations of each other\n ";

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
        // cout<<a<<endl;

         if((strcmp(a,s2))==0)
            c++;
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
