#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    int n , count=0 ;
    cin >> n ;
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            count++ ;
        }
        
    }
    if ((count==0)&&(n!=1))
    {
        cout << "It's a prime number" << endl ;
    }
    else
    {
        cout << "It's not a prime number" << endl ;
    }
    
    

    return 0;
}