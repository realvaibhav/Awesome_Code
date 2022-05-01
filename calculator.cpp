#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


int add()
{
    cout << "####  Addition ####" << endl ;
    cout << "How many numbers you want to add: " ;
    int n ;
    cin >> n ;
    int arr[n] , sum=0  ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
        sum+=arr[i] ;
    }
    cout << "The answer is: " <<  sum << endl ; 

    return 0;
}
int subs()
{
    cout << "####  Substraction ####" << endl ;
    cout << "Enter the numbers: " ;
    int a , b ;
    cin >> a ;
    cin >> b ;

    cout << "the answer after substraction is: " << (a-b) << "  and  " ;
   
    cout << "the modulus value is: " << abs(a-b) << endl ;

    return 0 ;
}
int multiply()
{
    cout << "#### Multiplication ####" << endl ;
    cout << "How many numbers you want to multiply with each other: " ;
    int n ;
    cin >> n ;

    int arr[n] , ans=0 ;
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i] ;
       ans*=arr[i] ;
    }
     
    cout << "The answer is: "  << ans << endl  ; 

    return 0;
}
int divide()
{
    cout << "#### Division ####" << endl ;
    double a , b ;
    cout << "Enter the dividend: " ;
    cin >> a ;
    cout << "Enter the  divisor: " ;
    cin >> b ;
    cout << "The answer is: "  << (a/b) << endl ;

    return 0;
}
int remain()
{
    cout << "#### Get the Remainder ####" << endl ;
    int a , b ;
    cout << "Enter the dividend: " ;
    cin >> a ;
    cout << "Enter the  divisor: " ;
    cin >> b ;
    cout << "The remainder is: " << (a%b) << endl ;

    return 0 ;
}
int fact()
{
    cout << "#### Factorial ####" << endl ;
    int n , f=1 ;
    cout << "Enter the number: " ;
    cin >> n ;
    if(n<0)
    {
        cout << "factorial is not possible for this number ... try for a non-negative number " << endl ;
    }
    else
    {
        if(n==0||n==1)
        {
            cout << "1" << endl ;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                f=f*i ;
            }
            cout << "The factorial of "<< n << " is: "  << f << endl ;
        }
        
    }

    return 0 ;
}
int logg()
{
    cout << "#### log value with base 10 ####" << endl ;
    double n ;
    cout << "Enter the number for which you want to find log value: " ;
    cin >> n ;
        if(n<=0)
        {
            cout << "Please enter a different number with domain lies in (0,∞) " << endl ;
        }
        else
        {
            cout << "The value of log10" << (n) << " is: " << log10(n) << endl ;
        }
    return 0;
}
int ln()
{
    cout << "#### log value with base e ####" << endl ;
    double n ;
    cout << "Enter the number for which you want to find natural log: " ;
    cin >> n ;
        if(n<=0)
        {
            cout << "please enter a different number with domain lies in (0,∞) " << endl ;
        }
        else
        {
            cout << "The value of ln" << (n) << " is: " << log(n) << endl ;
        }

    return 0;
}
int ax()
{
    cout << "#### exponential with e ####" << endl ;
    double a, x ;
    cout << "Enter the base: " ;
    cin >> a ;
    cout << "Enter the power: " ;
    cin >> x ;

    cout << "The answer is: " << pow(a,x) << endl ;

    return 0 ;
}
int ex()
{
    cout << "#### exponential with e ####" << endl ;
    double  e=2.7 ;
    double x ;
    cout << "Enter the power: " ;
    cin >> x ;

    cout << "The answer is: "  << pow(e,x) << endl ;

    return 0;
}
int xx()
{
    
    int x ;
    cout << "Enter the number: " ;
    cin >> x ;
    cout << "The square of " << x << " is: " << (x*x) << endl ;

    return 0 ;
}
int xxx()
{
    int x ;
    cout << "Enter the number: " ;
    cin >> x ;
    cout << "The cube of " << x << " is: " << x*x*x << endl ;

    return 0;
}
int sroot()
{
    int x ;
    cout << "Enter the number: " ;
    cin >> x ;
    cout << "The square root of " << x << " is: "  << sqrt(x) << endl ;

    return 0;
}
int croot()
{
    int x ;
    cout << "Enter the number: " ;
    cin >> x ;
    cout << "The cube root of " << x << " is: " << cbrt(x) << endl ;

    return 0;
}
int greatest()
{
    double x ;
    cout << "Enter the number: " ;
    cin >> x ;
    cout << "Greatest integer value of" << x << " is: " <<floor(x) << endl ; 

    return 0;
}
int fractional()
{
    double x ;
    cout << "Enter the number: " ;
    cin >> x ;
    cout << "Fractional part of" << x << " is: " << (x - floor(x)) << endl ;

    return 0;
}
int recipy()
{
    double x ;
    cout << "Enter the number: " ;
    cin >> x ;
    cout << "The reciprocal of " << x << " is: "  << (1/x) << endl ;

    return 0;
}




int main()
{
    cout << "********* Welcome to our Calcy ********" << "\n" ;
    cout << "\n" ;
    cout << "What operation do you want to perform (choose any option): " << "\n" ;
    
    cout << "\n" ;
    cout << " 1. Addition   2. Substraction   3. Muplitication  "  << endl ;
    cout << " 4. Division   5. Remainder      6. Factorial      "  << endl ;  
    cout << " 7. common log 8. ln    9. a^x   10. e^x           "  << endl ;
    cout << " 11. x^2   12. x^3   13. sqrt    14. cbrt          "  << endl ;
    cout << " 15. grtst int    16. frctnl part  17. Reciprocal  "  << endl ;
    
    cout << endl ;

    cout << "Enter your choice here: " ; 
    
    int n ;
    cin >> n ;

    cout << endl ;

    switch (n)
    {
    case 1:  add() ; 
             break ;
    case 2:  subs() ; 
             break ;
    case 3:  multiply() ; 
             break ;
    case 4:  divide() ; 
             break ;
    case 5:  remain() ; 
             break ;
    case 6:  fact() ; 
             break ;
    case 7:  logg() ; 
             break ;
    case 8:  ln() ; 
             break ;
    case 9:  ax() ; 
             break ;
    case 10: ex() ; 
             break ;
    case 11: xx() ; 
             break ;
    case 12: xxx() ; 
             break ;
    case 13: sroot() ; 
             break ;
    case 14: croot() ; 
             break ;
    case 15: greatest() ; 
             break ;
    case 16: fractional() ; 
             break ;
    case 17: recipy() ; 
             break ;                                                                                                                                       
    default: cout << "Please choose a valid option from above choices" << endl ;
             break;
    }
    
    cout << endl ;
    cout << "Thanks for visiting Calcy !!! Have a nice day... " << endl ;

    return 0;
}  
