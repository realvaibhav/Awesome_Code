#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{
    int n ;
    cin >> n ;
    n-- ; // as array have n-1 elements 
    int arr[n]  ; 
    int ans=0 , flag=0 ;
    for(int i=0 ; i<n ; i++)
    {
         cin >> arr[i] ;
    }
    sort(arr,arr+n)  ;
    for(int i=0 ; i<n ; i++)
    {
       if(arr[i]!=i+1) 
       {
           ans=arr[i] ;
           flag=1 ;
           break ;
           
       } 
    }
    
    if(flag==0)
    {
        cout << n+1 << endl ;
    }
    else
    {
        cout << ans-1 << endl ;
    } 
    
        
      
      return 0  ;
}
