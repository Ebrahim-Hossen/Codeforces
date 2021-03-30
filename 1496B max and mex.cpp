#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> s(n);
        set<int>s1;
        for(int i=0;i<n;i++)
        {
           cin>>s[i];
        }

        while(k--)
        {
            int mex,r,cnt=0;
            int ma=*max_element(s.begin(),s.end());
            for(int i=0;i<ma;i++)
            {
                if(s[i] != i)
                {
                    mex=i;
                    break;
                }
                else
                {
                    mex=i+1;
                }
            }
            r=((ma+mex)+1)/2;
            s.push_back(r);
        }
        for(auto u :s)
        {
            s1.insert(u);
        }
        cout<<s1.size()<<endl;
    }
    return 0;
}
