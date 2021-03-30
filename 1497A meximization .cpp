#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<int> v1;
        for(int i=0;i<n;i++)
        {
            if(v[i] != v[i+1])
            {
                v1.emplace_back(v[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==v[i+1])
            {
                v1.emplace_back(v[i]);
            }
        }
        for(auto u : v1) cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
