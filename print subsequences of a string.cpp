#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{

    string s , res ;
    getline( cin , s )  ;
    int n = s.size()  ;
    set<string> sub ; 
    
    for( int i=0 ; i<n ; i++ )
    {
        for( int j=n ; j>i ; j-- )
        {
            res=s.substr(i,j)  ;
            sub.insert(res)    ;
        }
    }

    for(auto x:sub)
    {
        cout << x << " " ;
    }
    cout << endl ;

    
    return 0  ;
}

