#include<bits/stdc++.h>
using namespace std ;
int main(){
string x;
cin>>x;

int a= (int)x.front() - '0' ;

if(a%2==0){
    cout<<"EVEN"<<endl;
}
else{
    cout<<"ODD"<<endl;
}
return 0;
}

