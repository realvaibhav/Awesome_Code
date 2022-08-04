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
   int temp[n] ;
   int x=1 ;
   temp[0]=arr[0] ;
   for(int i=1 ; i<n ; i++)
   {
      if(arr[i]!=temp[x-1])
      {
         temp[x]=arr[i] ;
         x++ ;
      }
   }
   
   for(int i=0 ; i<x ; i++)
   {
      cout << temp[i] << " " ;
   }

   cout << endl ;


   return 0  ;
}