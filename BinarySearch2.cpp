#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int BinarySearch(int arr[] , int l , int r , int x)
{
    int res=-1 ;
    if(l>r)
    {
        return res ;
    }
    int mid=(l+r)/2 ;
    if(x==arr[mid])
    {
        return mid  ;
    }
    else if(x>arr[mid])
    {
        return BinarySearch(arr,mid+1,r,x) ; // l becomes mid+1
    }
    else // x<arr[mid]
    {
        return BinarySearch(arr,l,mid-1,x) ;  // r becomes mid-1
    }

}

int main()
{
    int n  ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    cout << "Enter the element you want to find\n" ;
    int x ;
    cin >> x ;
    int ans = BinarySearch(arr,0,n-1,x) ;

    if(ans==-1)
    {
        cout << x << " is not present in given array" << endl ;
    }
    else
    {
        cout << x << " is found at index " << ans << endl  ;
    }




    return 0  ;
}