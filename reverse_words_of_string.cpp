#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{

    string s ;
    getline( cin , s )  ;

    int j=0 , a=0 , b=0 ;
    char temp ;
    for(int i=0 ; i<s.size() ; i++)
    {
        j=i ; // position after whitespace
        while((int)s[j]!=32 && j<s.size())
        {
            j++ ;
        }
        a=i ; 
        b=j-1 ;  // one position before whitespace  
        while(a<b)
        {
            temp=s[a] ;
            s[a]=s[b] ;
            s[b]=temp ;
            a++ ;
            b-- ;
        }
        i=j ; // whitespace position
    }
    
    cout << s << endl ;
    
    return 0  ;
}

