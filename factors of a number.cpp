#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{  
    int n ;
    cin >> n ;
    int num1=0 , num2=0 ;
    for(int i=1 ; i<=sqrt(n) ; i++) 
    {
        if(n%i==0)
        {
            num1=i   ;
            num2=n/i ;
        
            if(num1!=num2)
            {
                cout << num1 << " " << num2 << endl ;
            }
            else  // n is a perfect square
            {
                cout << num1 << endl ;
            }
        }
    }


    return 0  ;
}
