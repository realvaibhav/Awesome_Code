#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

bool palindrome(int a, int n, string s)
{
    if(a>n)
    {
        return true ;
    }
    
    if(s[a]==s[n])
    {
        a++ ;
        n-- ;
        return palindrome(a, n, s) ;
    }
    else
    {
        return false ;
    }
}


int main()
{
    string s ;
    cin >> s ;
    int n=s.size()-1 ;
    int a=0 ;
    bool flag=palindrome(a, n, s) ;

    if(flag)
    {
        cout << s << " is a palindrome string" << endl ;
    }
    else
    {
        cout << s << " is not a palindrome string" << endl ;
    }


    return 0  ;
}