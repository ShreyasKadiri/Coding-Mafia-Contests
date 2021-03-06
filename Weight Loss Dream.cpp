/*
Losing weight is tough. Ayush is still trying his best to lose weight. But who doesn't love food. Dream world however do not work on the laws 
of common sense. Ayush is dreaming of food but he is still determined about diet. His mom is going to serve him N dishes. Each dish has its own 
taste value Taste and dish type Typei. His real world is affecting his dream as well. He is scared that eating will result in weight gain. But here eating 
dish will only make Ayush gain Taste*i grams. Now he can ask his mom to rearrange order of dishes to be served among same types of dishes. He is wondering, 
about the minimum weight gain in grams.


Dishes are indexed using 1 base indexing ; which means that the first dish is dish number 1  and not 0.

Note: Please try to understand from testcases explanation before asking on discuss. We spend time on setting, testing and verifying problems 
and their statements.

Sample Input 0

6
5 1
6 1
7 1
2 1
1 1
0 1
Sample Output 0

47


*/



#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	scanf("%d",&n);
	map<int,vector<int>> m;
	vector<int> b(n);
	for(int i = 0; i < n; ++i){
		scanf("%d%d",&a,&b[i]);
		m[b[i]].emplace_back(a);
	}
	for(auto& i: m)sort(i.second.begin(),i.second.end());
	long long ans = 0;
	for(int i = 0; i < n; ++i){
		ans += m[b[i]].back() * 1LL * (i+1);
		m[b[i]].pop_back();
	}
	return printf("%lld",ans) , 0;
}
