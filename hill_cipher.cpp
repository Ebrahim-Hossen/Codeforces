#include<bits/stdc++.h>
using namespace std ;

int key[3][3] ;

int mod26(int x)
{
return x >= 0 ? (x%26) : 26-(abs(x)%26) ;
}

int findDet(int m[3][3] , int n)
{
int det;
if(n == 2)
{
det = m[0][0] * m[1][1] - m[0][1]*m[1][0] ;
}
else if (n == 3)
{
det = m[0][0]*(m[1][1]*m[2][2] - m[1][2]*m[2][1])  - m[0][1]*(m[1][0]*m[2][2] - m[2][0]*m[1][2] ) + m[0][2]*(m[1][0]*m[2][1] - m[1][1]*m[2][0]);
}
else det = 0 ; // invalid input
return mod26(det);
}


int findDetInverse(int R )
{
    for(int i=1;;i++)
    {
        if(((i*R)%26)==1)
        {
            return i;

        }
    }

}

void multiplyMatrices(int a[1000][3] , int a_rows , int a_cols ,  int b[1000][3] , int b_rows , int b_cols , int res[1000][3])
{
for(int i=0 ; i < a_rows ; i++)
{
for(int j=0 ; j < b_cols ; j++)
{
for(int k=0 ; k < b_rows ; k++)
{
res[i][j] += a[i][k]*b[k][j] ;
}
res[i][j] = mod26(res[i][j]) ;
}
}
}

void findInverse(int m[3][3] , int n , int m_inverse[3][3] )
{
int adj[3][3] = {0};

int det = findDet(m , n);
int detInverse = findDetInverse(det);

if(n==2)
{
adj[0][0] = m[1][1];
adj[1][1] = m[0][0];
adj[0][1] = -m[0][1];
adj[1][0] = -m[1][0];
}
else if(n==3)
{
int temp[5][5] = {0} ;
for(int i=0; i<5; i++)
{
for(int j=0; j<5; j++)
{
temp[i][j] = m[i%3][j%3] ;
}
}
for(int i=1; i<=3 ; i++)
{
for(int j=1; j<=3 ; j++)
{
adj[j-1][i-1] = temp[i][j]*temp[i+1][j+1] - temp[i][j+1]*temp[i+1][j];
}
}
}

for(int i=0; i<n ; i++)
{
for(int j=0; j<n ; j++)
{
m_inverse[i][j] = mod26(adj[i][j] * detInverse) ;
}
}
}


string encrypt(string pt, int n)
{
int P[1000][3] = {0} ;
int C[1000][3] = {0} ;
int ptIter = 0  ;

while(pt.length()%n != 0)
{
pt += "x" ;
}
int row = (pt.length())/n;

for(int i=0; i<row ; i++)
{
for(int j=0; j<n; j++)
{
P[i][j] = pt[ptIter++]-'a' ;
}
}


multiplyMatrices(P, row , n , key , n , n , C) ;

string ct = "" ;
for(int i=0 ; i<row ; i++)
{
for(int j=0 ; j<n ;j++)
{
ct += (C[i][j] + 'a');
}
}
return ct ;
}


string decrypt(string ct, int n)
{
int P[1000][3] = {0} ;
int C[1000][3] = {0} ;
int ctIter = 0 ;

int row = ct.length()/n;

for(int i=0; i<row ; i++)
{
for(int j=0; j<n; j++)
{
C[i][j] = ct[ctIter++]-'a' ;
}
}

int k_inverse[3][3] = {0};

findInverse(key, n , k_inverse);
multiplyMatrices(C, row , n , k_inverse , n , n , P) ;

string pt = "" ;
for(int i = 0 ; i<row ; i++)
{
for(int j=0 ; j<n ; j++)
{
pt += (P[i][j] + 'a');
}
}
return pt ;
}

int main()
{
string pt,s ;
int n ;

cout << "Enter plain text: " ;
cin >> pt;

transform(pt.begin(), pt.end(), pt.begin(), ::tolower);

cout << "Enter order of key matrix : ";
cin >> n ;

cout<<"Enter key matrix: " <<endl;
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
cin >> key[i][j];
}
}

cout << "\nOriginal text  : " << pt << endl;

string ct = encrypt(pt, n) ;
cout << "Cipher text : " << ct << endl;

string dt = decrypt(ct, n);
cout << "Plain text : " << dt << endl;

return 0;
}


