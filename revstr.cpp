#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    string s ;
    getline(cin,s) ;
    string check=s ;

    int len=s.length() ;
    int j=len-1 , i=0 ;
    while (i<j)
    {
       char temp=s[j] ;
       s[j]=s[i] ;
       s[i]=temp ;

       j-- ;
       i++ ;
    }

    cout << "The reverse of above string is " << s << endl ;

    if (s==check)
    {
        cout << "the string is palindrome in nature " << endl ;
    }
    else
    {
        cout << "It is not a palindrome string" << endl ;
    }

   
    return 0;
}