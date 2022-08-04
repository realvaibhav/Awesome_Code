#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

string encode(string src)
{     
   int n=src.length() ;
   int temp=0 ;
   char c ;
   string ans ;
   for(int i=0 ; i<n-1 ; i++)
   {
       c=src[i] ;
       if(src[i]==src[i+1])
       {
           temp++ ;
       }
       else
       {
           ans+=c ;
           if(temp<=8)
           {
                c=(temp+1)+48 ;
                ans+=c ;
                temp=0 ;
           }
           else
           {
               int v=0 ;
               int res=0 ;
               temp++ ;
               while(temp>0)
               {
                  v=(temp%10) ;
                  res=res*10+v ;
                  temp/=10 ;
               }
               while(res>0)
               {
                   v=(res%10) ;
                   c=v+48 ;
                   ans+=c ;
                   res/=10 ;
               }
           }
       }
       
   }
   
   c=src[n-1] ;
   ans+=c ;
   if(temp<=8)
           {
                c=(temp+1)+48 ;
                ans+=c ;
                temp=0 ;
           }
           else
           {
               int v=0 ;
               int res=0 ;
               temp++ ;
               while(temp>0)
               {
                  v=(temp%10) ;
                  res=res*10+v ;
                  temp/=10 ;
               }
               while(res>0)
               {
                   v=(res%10) ;
                   c=v+48 ;
                   ans+=c ;
                   res/=10 ;
               }
           }
   
   
   return ans ;
}

int main() 
{
    string s ;
    cin >> s ;

    string ans=encode(s) ;
    cout << ans << endl ;

    return 0 ;
}