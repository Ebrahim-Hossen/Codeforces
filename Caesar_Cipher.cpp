#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    //char ch[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int key ;
    cout<<"Enter the plaintext :"<<endl;
    getline(cin,s);
    cout<<"Enter the key: "<<endl;
    cin>>key;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' '){
            cout<<s[i] ;
        }
        else{
            if((int(s[i])+key) > 122){
            cout<<char(((s[i]+key)-122)+96);
        }
        else
        {
            cout<<char(s[i]+key);
        }
        }

    }


    return 0;
}
