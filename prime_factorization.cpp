#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{  
    int n ;
    cin >> n ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        int count=0 ;
        if(n%i==0)
        {
            while(n%i==0)
            {
                count++ ;
                n=n/i ;
            }
            for(int j=1 ; j<=count ; j++)
            {
                cout << i << " "   ;
            }
        }
    }

    if(n>1)  // if n is a prime number then this line will run
    {
        cout << n   ;
    }

    cout << endl ;


    return 0  ;
}
