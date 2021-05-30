   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      
      int n ;
      cin >> n ;
      int arr[n] ;
      for(int i=0 ; i<n ; i++)
      {
         cin >> arr[i]  ;
      }

      int ans=0 , res=0 , check=arr[0]  ;
      for(int i=0 ; i<n ; i++)
      {
          check=max(check,arr[i]) ;
          if(arr[i]>=0)
          {
              res+=arr[i] ;
          }
      }
      if(res>0)
      {
          ans=res ;
      }
      else
      {
          ans=check ;
      }
      
      cout << ans << endl ;

      
      
      return 0  ;
   }


   int main()
   {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int t ;
      cin >> t ;
      for (int i = 0; i < t; i++)
      {
         solution() ;
      }

      return 0  ;
   }