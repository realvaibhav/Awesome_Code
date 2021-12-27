#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    int n ;
    cin >> n ;
    

    if(n<=1)
    {
        cout << "not a prime number" << endl ;
        return 0 ;
    }


    if(n%2==0)
    {
        cout << "It's not a prime number" << endl ;
    }
    else if(n%3==0)
    {
        cout << "It's not a prime number" << endl ;
    }
    else
    {
        for(int i=5 ; i<=sqrt(n) ; i=i+6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                cout << "It's not a prime number" << endl ;
                return 0 ;
            }
        }

        cout << "It's a prime number" << endl ;
    }

    return 0;
}