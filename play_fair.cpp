#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string key,ch;
    cout<<"Enter the key : "<<endl;
    getline(cin,key);

    ch ="abcdefghiklmnopqrstuvwxyz";
    vector<vector<char>> vec ;

    vector<char> str ;

    vector<char> s;
    for(int i=0;i<key.size();i++){
        for(int j=0;j<26;j++){
            if(key[i] == ch[j]){
                s.push_back(key[i]);
                ch.erase(ch.begin()+j);
            }
        }
    }
    for(auto u : s){
        str.push_back(u);
    }

    for(auto u :ch){
        str.push_back(u);
    }
    int k =0 ;
    for(int i=0;i<5;i++){
        vector<char> v1;
        for(int j=0;j<5;j++){
            v1.push_back(str[k]);
            k++;
        }
        vec.push_back(v1) ;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           cout<<vec[i][j]<< " " ;
        }
        cout<<endl;
    }

    string message ;
    cout<<"Enter the message : "<<endl;
    getline(cin,message);
    vector<char> text ;


    for(int i=0;i<message.size();i++){
            if(message[i]==message[i+1]){
                text.push_back(message[i]);
                text.push_back('x');
            }
            else{
                text.push_back(message[i]);
            }
    }
    for(auto u : text)
        cout<<u<<" " ;



    return 0;

}
