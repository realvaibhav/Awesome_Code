
// an array of size n-1 has elements from 1 to n ; only one element is missing
// we have to find that missing element

#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main() 
{    
        //  if array is unsorted

   int n ; 
   cin >> n ; 
   int arr[n-1] ;
   int sum=0 ;
   
   for(int i=0; i<n-1; i++)
   {
      cin >> arr[i] ;
      sum+=arr[i] ;
   }
   
   int temp=n*(n+1) ;
   temp/=2 ;

   cout << temp-sum << endl ;

   //  if array is sorted

   int ans=n ;
   for(int i=0; i<n-1; i++)
   {
      if(arr[i]!=(i+1))
      {
         ans=i+1 ;
         break ;
      }
   }
   
   cout << ans << endl ;

   return 0 ;
}