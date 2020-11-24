#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "**************** Welcome *************\n\n" ;
    int digit=0,small_letter=0,cap_letter=0,spec_char=0,total=0,words=0;
    cout << "Enter your input \n" ;
    string s;
    getline(cin,s) ;
    int len_input=s.length() ;
    for (int i = 0; i < len_input; i++)
    {
        if(s[i]!='\0')
        {
            if (s[i]>='0' && s[i] <='9')
            {
                digit++ ;
            }
            else if (s[i]>='a' && s[i] <='z')
            {
                small_letter++ ;
            }
            else if (s[i]>='A' && s[i] <='Z')
            {
                cap_letter++ ;
            }            
            else if ((s[i]>='!' && s[i] <='/')||(s[i]>=':' && s[i] <='@')||(s[i]>='[' && s[i] <='`')||(s[i]>='{' && s[i] <='~'))
            {
               spec_char++ ;
            }  
            
        }
        
    }

      total=digit+small_letter+cap_letter+spec_char;
     
      cout << "######################### Here is your output #################\n\n\n" ;

      cout << "Total number of character in the paragraph : " << total << "\n" ;
      cout << "Total number of digits  : " << digit << "\n" ;
      cout << "Total number of small letters : " << small_letter << "\n" ;
      cout << "Total number of capital letters : " << cap_letter << "\n" ;
      cout << "Total number of special characters : " << spec_char << "\n" ;
      cout << "Above paragraph contains " << (len_input - total) + 1 << " strings" << "\n\n" ;

      cout << "**************** Thank You *************\n\n" ;


    return 0;
}