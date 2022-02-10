#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main()
{
    ll n ;
    cin >> n  ;
    ll arr[n] ;
    for(ll i=0 ; i<n ; i++)
    {
        cin >> arr[i]  ;
    } 
    ll sum=0 ;
    ll temp=1 ;
    for(ll i=0 ; i<32 ; i++)
    {
        ll ans=0 ;
        ll count=0 ;
        for(ll j=0 ; j<n ; j++)
        {
            ll x=arr[j]%2 ;
            if(x==1)
            {
                count++ ;
            }
            arr[j]/=2 ;
        }

        ll res=count*(count-1) ;
        res/=2  ;
        ans=temp*res ;
        sum+=ans ;
        temp*=2 ;
    }

    cout << sum << endl ;


    return 0 ;
}
