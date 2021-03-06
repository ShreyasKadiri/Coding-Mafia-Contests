#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    assert(n <= 10);
    while(n--){
        string s;
        cin >> s;
        assert(s.size() <= 100000);
        int n = s.size();
        vector<int> z(n,0);
        for(int i = 1,l = 0, r = 0; i < n; ++i){
            if(i <= r)z[i] = min(z[i-l],r-i+1);
            while(i+z[i] < n && s[i+z[i]] == s[z[i]])z[i]++;
            if(i+z[i]-1 > r)l = i, r = i + z[i] - 1;
        }
        long long ans = 0;
        for(int LEN = 1; LEN <= n; ++LEN){
            bool pos = true;
            for(int i = LEN; i < n && pos; i+=LEN)pos = z[i] >= LEN;
            if(pos){
                ans += LEN;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
