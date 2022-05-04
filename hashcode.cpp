#include<bits/stdc++.h>
using namespace std ;
using namespace chrono ;
typedef long long ll ;
typedef long double ld ;
#define input(s) freopen(s, "r", stdin)
#define output(s) freopen(s, "w", stdout)
#define endl "\n"

void solve()
{

}


int main(int argc, char *argv[])
{
    input(argv[1]);
    output(argv[2]);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    auto start1 = high_resolution_clock::now();
    ll t ;
    cin >> t ;
    for (ll i=1; i<=t; i++)
    {
        solve() ;
    }

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    cerr << "Time: " << duration . count() / 1000 << endl;
    
    
    return 0 ;
}
