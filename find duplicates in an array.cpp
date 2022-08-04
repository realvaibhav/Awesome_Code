//  given an array of size n contains elements from 0 to n-1 ; 
//  we have to find the repeating elements

#include<bits/stdc++.h>
using namespace std ;

int main()
{   
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }

    for(int i=0 ; i<n ; i++)
    {
        arr[arr[i]%n]=arr[arr[i]%n]+n ;
    }

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>=2*n)
        {
            cout << i << " " ;
        }
    }

    cout << endl ;


    return 0 ;
}