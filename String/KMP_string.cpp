#include<iostream>
#include<vector>
using namespace std;
int m=1000000007;
void KMP(string n , string h)
{
    int p=31;
    int len1=n.size();
    int len2=h.size();
    // int result;
    int j;
    vector <int> pi (20000001,0);
    
    string s = n + "#" + h;
    int flag=0;
    for(int i=1;i<s.size();++i)
    {
        j=pi[i-1];

        while(j>0 && s[i]!=s[j])
        {
            j=pi[j-1];
        }
        if(s[i]==s[j])
            ++j;
        pi[i]=j;
    }
    for(int i=n.size();i<pi.size();++i)
    {
        if(pi[i]==n.size())
        {
            cout<<i-2*n.size()<<endl;
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

        KMP(needle,hstack);

    }
    
}
