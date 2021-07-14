   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int main()
   {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);


      int n ;
      cin >> n ;
      int ans=0 , res=0 , count=0 ;
      int arr[n] ;
      for(int i=0 ; i<n ; i++)
      {
         cin >> arr[i]  ;
      }
      sort(arr,arr+n) ;
      for(int i=0 ; i<n-1 ; i++) 
      {
          if(arr[i]==arr[i+1])
          {
              ans=arr[i] ;
              break ;
          }
      }

      cout << ans << endl ;
      

      return 0  ;
   }
