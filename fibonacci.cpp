#include<bits/stdc++.h>
using namespace std;

// fibonacci sequence

// 1 2 3 4 5 6 7 8 
// 0 1 1 2 3 5 8 13 
// fib(n)=fib(n-1)+fib(n-2)

int fib(int n)
{
   if(n==1)
   {
      return 0 ;
   }
   if(n==2)
   {
      return 1 ;
   }

   return fib(n-1)+fib(n-2) ;
}

int main() 
{
   int n ;
   cin >> n ;

   int ans=fib(n) ;
   cout << ans << endl ;

   return 0 ;
}