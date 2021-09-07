#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

ll power(ll a , ll b , ll m)  // here a is the base while b is the power 
{
    a=a%m ; // update a by taking modulo with m 
    if(a==0)
    {
        return 0 ; // check for the case if a is divisible by m ;
    }
    ll res=1  ;
    while(b) // b!=0 or b>0
    {
        if(b%2==1) //  check if b is odd
        {
            res=(res*a)%m ;    // multiply res by a
        }

        b=b/2 ; 
        a=(a*a)%m ;     // don't forget to take modulo with m 
    }

    return res  ;  
}

int main()
{
    // (a^b)%m
    ll a , b , m  ;
    cin >> a >> b >> m ; 

    ll ans=power(a,b,m)  ;
    cout << ans << endl  ;  // printing (a^b)%m

    return 0  ;
}