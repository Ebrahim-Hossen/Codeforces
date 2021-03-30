#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b,long long int& x,long long int& y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
   long long int x1, y1;
    long long int d=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(y1*(a/b));
    return d;
}
int main()
{
    for(int i=1;i<=2;i++){
   long long int a,b;
    cin>>a>>b;
    long long int x,y;
    cout<<x<<" "<<y<<" "<<gcd(a,b,x,y)<<endl;

    return 0;
}
}
