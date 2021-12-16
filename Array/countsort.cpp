#include<stdio.h>
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n,a[100],count0,count1,count2;
    cin>>n;
    count0=0;
    count1=0;
    count2=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            count0+=1;
        else if (a[i]==1)
            count1+=1;
        else
        {
            count2+=1;
        }    
    }
    while ( count0!=0 || count1!=0 || count2!=0)
    {
        if(count0>0)
        {
            cout<<0;
            count0-=1;
        }
        else if (count1>0)
        {
            cout<<1;
            count1-=1;
        }
        else
        {
            cout<<2;
            count2-=1;
        }
        
    }

}