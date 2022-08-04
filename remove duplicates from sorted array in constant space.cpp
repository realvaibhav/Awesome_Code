#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main()
{
   int n ;
   cin >> n ;
   int arr[n] ;
   for(int i=0 ; i<n ; i++)
   {
      cin >> arr[i] ;
   }
   int count=1 ;
   for(int i=1 ; i<n ; i++)
   {
      if(arr[i]!=arr[i-1])
      {
         arr[count]=arr[i] ;
         count++ ;
      }
   }

   for(int i=0 ; i<n ; i++)
   {
      cout << arr[i] << " " ;
   }
   cout << endl ;
   
   cout << count << endl ; // number of unique elements

   return 0  ;
}