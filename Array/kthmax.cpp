#include<stdio.h>
#include<iostream>
#include<limits.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,a[100],maxi,mini,k;
    cin>>n;
    cin>>k;
    mini=INT_MAX;
    maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<" k th largest "<<a[n-k];
    
}