#include<bits/stdc++.h>
using namespace std ;
int main(){
string x,y ;
cin>>x>>y;

int a= (int)x.back() - '0' ;
int b= (int)y.back() - '0' ;

int r = a+b ;

if(r>=10){
    cout<<r-10<<endl;
}
else{
    cout<<r<<endl;
}
return 0;
}

