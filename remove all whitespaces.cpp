#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{

    string s ;
    getline(cin , s) ;
    vector<char> vec  ;
    cout << "the size with whitespace  " << s.size() << endl ;
    for(int i=0 ; s[i]!='\0' ; i++)
    {
        if( (int)s[i]==32) // ascii code of whitespace is 32
        {
            s.erase(i,1) ;  // erase(index,len) ;
        }
    }
    cout << "the size without whitespace  " << s.size() << endl ;

    for(auto x:s)
    {
        cout << x  ;
    }
    cout << endl ;





    

      
    return 0  ;
}
