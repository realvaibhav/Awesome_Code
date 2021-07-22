#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s ;
	cin >> s ;

	int arr[60]={0} ;  // don't forget to intialize with 0
	for(int i=0 ; i < s.size() ; i++)
	{
		arr[s[i]]++ ;  // storing the count of an element by ascii code
	}
	for(int i=48 ; i<=57 ; i++)  // ascii code of '0' is 48 and of '9' is 57
	{
		cout << (char)i << " " << arr[i] << endl ; 
	}



	return 0  ;	
}