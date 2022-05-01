#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;

int BinarySearch2(int arr[] , int l , int r , int x)   // for last index of x 
{
    int ans=-1 ;
    while(l<=r)
    {
        int mid=(l+r)/2  ;
        if(x==arr[mid])
        {
            ans=mid ;  // here don't return mid value 
            l=mid+1 ;   // keep checking for upper indexes
        }
        else if(x>arr[mid])
        {
            l=mid+1 ;
        }
        else
        {
            r=mid-1 ;
        }
    }

    return ans  ;
}


int BinarySearch1(int arr[] , int l , int r , int x)   // for first index of x 
{
    int ans=-1 ;
    while(l<=r)
    {
        int mid=(l+r)/2  ;
        if(x==arr[mid])
        {
            ans=mid ;  // here don't return mid values 
            r=mid-1 ;  // keep checking for lower indexes
        }
        else if(x>arr[mid])
        {
            l=mid+1 ;
        }
        else
        {
            r=mid-1 ;
        }
    }

    return ans  ;
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
    int x ;
    cout << "Enter the element you want to search \n" ;
    cin >> x  ;
    
    int first_index = BinarySearch1( arr , 0 , n-1 , x )  ;
    int last_index = BinarySearch2( arr , 0 , n-1 , x )  ;

    if(first_index==-1 && last_index==-1)
    {
        cout << "The frequency of " << x << " in the given array is " << 0 << endl ;
    }
    else
    {
        cout << "The frequency of " << x << " in the given array is " << (last_index-first_index)+1 << endl ;
    }
    

    return 0  ;
}

