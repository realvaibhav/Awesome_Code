#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{
    int n  ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    int x , ans=-1 ;
    cin >> x ;
    int l=0 ;
    int r=n-1 ; 
    while (l<=r)
    {
        int mid=(l+r)/2  ;
        if( x==arr[mid] )
        {
            ans=mid  ;
            break    ;
        }
        else if( x>arr[mid] )
        {
            l=mid+1  ;
        }
        else
        {
            r=mid-1  ;
        }
    }
    
    if (ans==-1)
    {
        cout << x << " is not present in given array" << endl ;
    }
    else
    {
        cout << x << " is found at index " << ans << endl  ;
    }
    

    return 0  ;
}

