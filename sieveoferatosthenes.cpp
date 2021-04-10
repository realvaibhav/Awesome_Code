#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    ll n ;
    cin >> n ;
    ll arr[n+1] ;
    memset(arr,0,sizeof(arr)) ;
    
    for (ll i = 2; i <=sqrt(n); i++)
    {
        if (arr[i]==0)
        {
             for (ll j = i*i; j <=n ; j=j+i)
             {
                 arr[j]=1 ;
             }
              
        }
        
    }
    
    for (ll i = 2; i <=n; i++)
    {
        if (arr[i]==0)
        {
            cout << i << " " ;
        }
        
    }
    
    cout << endl ;
    
    

   
   return 0 ;

}