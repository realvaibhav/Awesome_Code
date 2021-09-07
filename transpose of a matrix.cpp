#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{  
                    //  by using another matrix of n*n
       
    int n ;
    cin >> n ;
    int mat[n][n] , ans[n][n] ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cin >> mat[i][j] ;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            ans[j][i]=mat[i][j] ;
        }
    }
    cout << "################# \n" ;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout <<  ans[i][j] << " "  ;
        }
        cout << endl ;
    }

                    // in constant space (in place)
                    

          cout << "transpose of matrix in constant space\n" ;

          for(int i=0 ; i< n ; i++)
          {
              for(int j=i+1 ; j<n ; j++)
              {
                  swap( mat[i][j] , mat[j][i] )   ;
              }
          }          
          for(int i=0 ; i<n ; i++)
          {
                for(int j=0 ; j<n ; j++)
                {
                    cout <<  mat[i][j] << " "  ;
                }
                cout << endl ;
          }


    return 0  ;
}
