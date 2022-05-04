#include<bits/stdc++.h>
using namespace std ;

int main()
{
   string s ;
   cin >> s ;
   vector<string> vec ;
   int n=s.size() ;
   int a=0,b=0 ;
   for(int i=0 ; i<n ; i++)
   {
      a=i ;
      while(s[i]!=',')
      {
         if(i>=n)
         {
            break ;
         }
         i++ ;
      }
      b=i ;
      string temp=s.substr(a,b-a) ;
      cout << a << " " << b << endl ;
      vec.push_back(temp) ;
   }

   for(auto x:vec)
   {
      cout << x << endl ;
   }
   
   return 0 ;
}
