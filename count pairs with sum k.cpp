#include<bits/stdc++.h>
using namespace std ;


int main()
{
   int n, k ;
   cin >> n >> k ;
   int arr[n] ;
   for(int i=0 ; i<n ; i++)
   {
      cin >> arr[i] ;
   }

   // method 1 (using hashing)

   unordered_multiset<int> s ;
   int ans= 0;

   for(int i=0 ; i<n ; i++)
   {
      if(s.count(k-arr[i]))
      {
         ans+=s.count(k-arr[i]) ;
      }
      s.insert(arr[i]) ;
   }

   cout << ans << endl ;

   // method 2 (but it is also similar to method 1)

   unordered_map<int,int> mp ;
   int temp=0, count=0 ;

   for(int i=0 ; i<n ; i++)
   {
      mp[arr[i]]++ ;
   }
   
   for(int i=0 ; i<n ; i++)
   {
      temp=k-arr[i] ;
      count+=mp[temp] ;

      if(temp==arr[i]) // if temp==arr[i] it signifies that there is a pair in the given array whose sum is 'k'
      {  // if you are still in doubt then you can simply use mp.find() to check whether temp is present or not 
         count-- ;
      }
   }

   cout << count/2 << endl ;


   return 0  ;
}