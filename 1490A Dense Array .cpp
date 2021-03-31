#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int last,ans=0;
    cin>>last;
    for(int i=1;i<n;i++)
    {
        int nw;
        cin>>nw;
        int a=min(last,nw) ,b=max(last,nw);
        while(a*2 <b)
        {
            ans++;
            a=a*2;
        }
        last=nw;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
