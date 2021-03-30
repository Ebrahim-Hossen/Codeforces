#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        int cnt=0;
        cin>>a>>b;
        do{
            long long int r=0,m=0;
            r=(a/b);
            a=r;
            m=b;
            b++;
            b=m;
            cnt++;
        }while(a !=0);
        cout<<cnt<<endl;
    }
    return 0;

}
