#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
   int n;
   cin >> n ;
   
   int r=0 , check=n , res=0 , ans=0 ;
   while (n!=0)
   {
       r=n%10 ;
       res=res*10+r ;
       n/=10 ;
   }
   if (check==res)
   {
       cout << "It is a palindrome number" << endl ;
   }
   else
   {
       cout << "Not a palindrome number" << endl ;
   }
   n=check ;
   int i=0 ;
   while (n!=0)
   {
       r=n%10 ;
       ans=ans+pow(10,i)*r ;
       n/=10 ;
       i++ ;

   }
   
   
   cout << "The number you entered above is " << ans << endl ;


    return 0;
}