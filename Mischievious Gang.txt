/*
Programmers are good at math but that doesn't mean they will miss any opportunity to prank others. But truth be told ; not everyone is 
brave enough to face the consequences when their pranks are reported to the authority. So what do they do? They put blame on other programmer, 
shameful but true. However, this is not the case with all programmers as they may decide to just accept the blame by taking the blame on themself 
!Pranks are performed and authorities catch the prankster and there begins the crazy blame game and authorities are tired of this blame game 
for obvious reasons. Daily they catch someone and blame a certain person as the prankster. But with blame game it is impossible. So daily they
 have their tolerance tol and they will simply arrest the person blamed after tol blames

Sample Input 0

5 5
2 3 4 1 5
6 2
5 5
3 1
4 3
2 4
Sample Output 0

3
5
3
2
1

*/

#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10, LN = 22;
vector<int> g[N];
int dp[N][LN],n,q,a,tol,b;

int main(){
    scanf("%d%d",&n,&q);
    for(int i = 1; i <= n; ++i){
        scanf("%d",&a);
        dp[i][0] = a;
    }
    for(int j = 1; j < LN; ++j){
        for(int i = 1; i <= n; ++i)dp[i][j] = dp[dp[i][j-1]][j-1];
    }
    while(q--){
        scanf("%d%d",&tol,&a);
        tol--;
        for(int j = 0; j < LN; ++j)if((tol >> j)&1)a=dp[a][j];
        printf("%d\n",a);
    }
    return 0;
}




