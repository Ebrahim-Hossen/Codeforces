#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v ;
    vector<int> v2 ;
    vector<int> v3;
    int n;
    cout<<"enter the key size :"<<endl;
    cin>>n;
    cout<<"Enter the key value :"<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    v2=v ;
    cout<<"After sorting : "<<endl;
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<< " " ;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]==v2[j]){
                v3.push_back(j);
            }
        }
    }

    cout<<"Find the index of key value "<<endl ;
    for(auto u :v3){
        cout<<u<<" " ;
    }

    cout<<endl;
    cout<<"plaintext is : "<<endl;

    vector<vector<char>> vec ;
    for(int i=0;i<4 ;i++){
        vector<char> v1;
        for(int j=0;j<n ;j++){
            char c;
            cin>>c;
            v1.push_back(c);
        }

        vec.push_back(v1);
    }
cout<<endl;
cout<<endl;

    for (int i = 0; i <4 ; i++) {
        for (int j = 0; j < n; j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    cout<<"Encrypted value is : "<<endl;
        for(auto u : v3 ){
                for(int k=0;k<4;k++){
                    cout<<vec[k][u];
                }
        }

    return 0;
}
