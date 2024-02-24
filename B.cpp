#include<bits/stdc++.h>
using namespace std ;
int main(){
int x,y;
char s;
cin>>x>>s>>y;
switch(s){
case '=':
    if(x==y){
        cout<<"Right"<<endl;
        }
    else{
    cout<<"Wrong"<<endl;
    }
    break;
case '>':
    if(x>y){
        cout<<"Right"<<endl;
        }
    else{
    cout<<"Wrong"<<endl;
    }
    break;
case '<':
    if(x<y){
        cout<<"Right"<<endl;
        }
    else{
    cout<<"Wrong"<<endl;
    }
    break;

}
return 0;
}

