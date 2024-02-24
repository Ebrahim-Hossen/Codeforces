#include<bits/stdc++.h>
using namespace std;
char a[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

int main()
{
string s,s1,s4="",s5="";
int b,b1;
cout<<"Enter key:";
getline(cin,s);

cout<<"Enter plaintext:";
getline(cin,s1);

s=removeSpaces(s);
s1=removeSpaces(s1);

transform(s.begin(), s.end(), s.begin(), ::toupper);
//cout<<s<<endl;

transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
//cout<<s1<<endl;
//cout<<s.size()<<endl;
//cout<<s1.size()<<endl;

b = s1.size()-s.size();
b1 =s1.size();
int w=s.size();


string s3="";
int i=0;
while(i<b){
    s3.push_back(s[i]);
    i++;
    if(i>=w){
             b=b-i;
        i=i%w;

    }

}
s=s+s3;


for(int i=0;i<s1.size();i++){
    int p,q,r;
    p=int(s[i])-65;
    q=int(s1[i])-65;
    r = p+q;
    if(r<26){
        s4+=a[r];
    }
    else{
        r=r%26;
        s4+=a[r];
    }
}
// cout<<s<<endl;
// cout<<s1<<endl;
 cout<<"Cipher text:"<<s4<<endl;

 for(int i=0;i<s1.size();i++){
    int p,q,r;
    p=int(s[i])-65;
    q=int(s4[i])-65;
    if(q>=p){
            r=q-p;
       s5+=a[r];
    }
    else{
        q+=26;
        r=q-p;
        s5+=a[r];
    }
 }
  cout<<"Plain text:"<<s5<<endl;

return 0;
}
