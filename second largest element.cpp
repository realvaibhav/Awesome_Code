#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 

int main()
{

    ll n ;
    cin >> n ;
    ll arr[n] ;
    for (ll i = 0; i < n; i++)
    {
         cin >> arr[i]  ; 
    }
    sort(arr,arr+n,greater<int>()) ;
    ll check=arr[0] ;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i]!=check)
        {
            cout << arr[i] << endl ;
            break ;
        }
        
    }


    return 0;
}