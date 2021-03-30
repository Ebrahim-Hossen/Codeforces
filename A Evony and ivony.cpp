#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,cnt=0;
    cin>>a>>b>>c;
    for(int i=0;i<=c/a;i++)
    {
        int k=c-i*a;
        if(k%b==0)
        {
            cnt++;
            break;
        }
    }
    if(cnt>0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
