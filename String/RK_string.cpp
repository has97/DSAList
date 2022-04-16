#include<iostream>
#include<vector>
using namespace std;
int m=1000000007;
void RB(string n , string h)
{
    int p=31;
    int len1=n.size();
    int len2=h.size();
    // int result;
    vector <long long int> v1 (max(len1,len2),1);
    for(int i=1;i<max(len1,len2);++i)
    {
        v1[i]=(v1[i-1]*p)%m;
    }
    vector <long long int> dp (len2+1,0);
    for(int i=0;i<len2;++i)
    {
        dp[i+1]=(dp[i]+((h[i]-'a'+1)*v1[i]))%m;
    }
    long long int hash=0;
    int flag=0;
    for(int i=0;i<len1;++i)
    {
        hash=(hash+((n[i]-'a'+1)*v1[i]))%m;
    }
    for(int L=0,R=len1;R<=len2;++L,++R)
    {
        if((hash*v1[L])%m==(dp[R]-dp[L]+m)%m)
        {
            cout<<L<<endl;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<endl;
        cout<<endl;
    }
}
int main()
{
    int n;
    string hstack,needle;
    while (cin>>n)
    {
        cin>>needle;
        cin>>hstack;

        RB(needle,hstack);

    }
    
}
