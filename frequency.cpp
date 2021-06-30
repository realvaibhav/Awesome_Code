#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{

    string s ;
    getline(cin , s)  ;
    int ans[256]={0}  ;   // intialize with 0

    for(int i=0 ; i<s.size() ; i++)
    {
        ans[s[i]]++  ;
    }
    for(int i=0 ; i<256 ; i++)
    {
        if(ans[i]!=0)
        {
            cout << "frequency of " << (char)i << " : " << ans[i] << endl ;
        }
    }
    

      
    return 0  ;
}
