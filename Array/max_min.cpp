#include<stdio.h>
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n,a[100],maxi,mini;
    cin>>n;
    mini=INT_MAX;
    maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]<mini)
        {
            mini=a[i];
        }
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }
    cout<<"maximum "<<maxi<<endl;
    cout<<"minimum "<<mini<<endl;
    
}