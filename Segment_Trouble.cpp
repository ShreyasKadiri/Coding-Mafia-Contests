#include<bits/stdc++.h>
using namespace std ;

# define ll long long
# define fast ios_base :: sync_with_stdio ( false ) ; cin.tie ( 0 ) ; cout.tie ( 0 ) ;

void solve ()
{
    int n ;
    cin >> n ;

    vector < array < int , 3 > > v ( n ) ;
    for ( int i=0 ; i < n ; i ++ )
    {
        int l , r , cost ;
        cin >> l >> r >> cost ;

        v[i] = { l , r , cost } ;
    }

    sort ( v.begin() , v.end() ) ;

    vector < int > suff_min ( n + 2 ) ;
    suff_min[n] = INT_MAX ;

    for ( int i = n - 1 ; i > -1 ; i -- )
        suff_min[i] = min ( suff_min[i + 1] , v[i][2] ) ;

    ll ans = LLONG_MAX ;

    for ( int i=0 ; i < n ; i ++ )
    {
        int opt_indx = -1 ; /// optimal_indx ( this is 'j' in the editorial ).

        int r = v[i][1] ;
        int cost_of_this_segment = v[i][2] ;

        for ( int lo = i + 1 , hi = n - 1 ; lo <= hi ; )
        {
            int mid = lo + hi >> 1 ;
            int l = v[mid][0] ;

            if ( l > r )
                opt_indx = mid , hi = mid - 1 ;

            else lo = mid + 1 ;
        }

        if ( opt_indx == -1 ) continue ;

        ll local_ans = 1LL * cost_of_this_segment * suff_min[opt_indx] ;
        ans = min ( ans , local_ans ) ;
    }

    if ( ans == LLONG_MAX )
        ans = -1 ;

    cout << ans << "\n" ;
}

int main()
{fast
    int t = 1;

    while ( t -- )
        solve ( ) ;

    return 0 ;
}
