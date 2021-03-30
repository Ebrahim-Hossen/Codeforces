#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b,int& x, int& y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    else
    {
        int x1, y1;
        int g=gcd(b,a%b,x,y);
        x1=x;
        y1=y;
        x=y1;
        y=x1-(a/b)*y1 ;
        return g;
    }
}
void p(int a,int b ,int c )
{
    int x,y;
    if(a==0 &&  b==0)
    {
        if(c==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
        int gc=gcd(a,b,x,y);
        if(c%gc !=0)
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
         //   cout<<"x="<<x*(c/gc)<<endl;
         //   cout<<"y="<<y*(c/gc)<<endl;
        }

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    p(a,b,c);

    return 0;
}
