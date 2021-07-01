#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{

    string s1 ;
    getline(cin , s1)  ;
    string s2 ;
    getline(cin,s2) ;
    int ans1[256]={0}  ;   // intialize with 0
    int ans2[256]={0}  ;

    for(int i=0 ; i<s1.size() ; i++)
    {
        ans1[s1[i]]++  ;
    }
    for(int i=0 ; i<s2.size() ; i++)
    {
        ans2[s2[i]]++  ;
    }
    int flag=1  ;
    for(int i=0 ; i<256 ; i++)
    {
        if( !( ans1[i] == ans2[i] ) )
        {
             flag=0 ;
             break ;
        }
    }

    if(flag==1)
    {
        cout << "strings are anagrams in nature" << endl ;
    }
    else
    {
        cout << "ohh noo ! not anagrams" << endl ;
    }
    

      
    return 0  ;
}
