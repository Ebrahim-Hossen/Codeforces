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
        vector<int> v;
        for(int i=1;i<=n;i++){
                if(i==k || (i<(k+1)/2))
                {
                    continue;
                }
                v.push_back(i);
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
