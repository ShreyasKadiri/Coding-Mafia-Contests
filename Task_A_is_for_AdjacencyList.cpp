#include<bits/stdc++.h>
using namespace std ;

void solve ()
{
    string s ;
    cin >> s ;

    bool good = false ;
    int n = s.size() ;

    for ( int i = 1 ; i < n ; i ++ )
    {
        if ( s[i] == s[i - 1] )
            good = true ;
    }

    if ( good ) cout << "good" ;
    else cout << "bad" ;

    cout << "\n" ;
}

int main()
{
    int t = 1;
    cin >> t ;

    while ( t -- )
        solve ( ) ;

    return 0 ;
}
