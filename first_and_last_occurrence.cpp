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
    int pos1=-1 , pos2=-1 ;
    int x ; 
    cout << "Enter the element you want to search \n" ;
    cin >> x ;
    for(int i=0 ; i<n ; i++)
    {
          if(arr[i]==x)
          {
              if(pos1==-1)
              {
                  pos1=i ;
              }
              else
              {
                  pos2=i ;
              }
          }
    }
    if(pos1!=-1 && pos2!=-1)
    {
        cout << "The first occurrence of " << x << " is at index " << pos1 << " and the last occurrence is at index " << pos2 << endl ;
    }
    else if(pos1!=-1)
    {
        cout << "There is only one occurrence of " << x << " and at the index " << pos1 << endl ;
    }
    else
    {
        cout << x << " is not found in the given array" << endl  ;
    }
    

    return 0  ;
}

