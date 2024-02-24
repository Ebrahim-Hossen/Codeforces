#include<bits/stdc++.h>
using namespace std ;
int main(){
vector<int> v ;
int n1;
cin>>n1;

while(n1--){
    int a;
    cin>>a ;
    v.push_back(a);
}
if(n1>2){
int m =*max_element(v.begin(),v.end());
int n =*min_element(v.begin(),v.end());

cout<<m<<endl ;
cout<<n<<endl ;

auto it = find(v.begin(),v.end(),m);
v.erase(it);
int m1 = *max_element(v.begin(),v.end());
cout<<m1-n<<endl;
}
else{
    cout<<"0"<<endl;
}

return 0;
}

