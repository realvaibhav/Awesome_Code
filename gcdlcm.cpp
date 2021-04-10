#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int gcd(int a , int b)
{
    if (a==b)
    {
        return a;
    }
    if (a>b)
    {
        return gcd(a-b,b);
    }
    if (a<b)
    {
        return gcd(a,b-a) ;
    }
    
    
}
 
int main()
{
    int a , b ;
    cin >> a >> b ;
    int ans=gcd(a,b) ;
    int res=(a*b)/ans ;

    cout << "gcd is " << ans << " and lcm is " << res << endl ;

    return 0 ;
}