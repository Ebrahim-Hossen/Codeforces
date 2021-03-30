#include<bits/stdc++.h>
using namespace std;
#define mx (int)1000
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[mx],b[mx];
        for(int i=1;i<=n;i++) cin>>a[i]>>b[i];

        int ti[mx];
        for(int i=1;i<=n;i++) cin>>ti[i];

        int sum=0;
        for(int i=1;i<=n;i++){
            sum += (a[i]-b[i-1]+ti[i]);
            if(i!=n){
                sum = max(b[i], sum+(b[i]-a[i]+1)/2);
            }
        }
        cout<<sum<<endl;

    }

    return 0;
}
