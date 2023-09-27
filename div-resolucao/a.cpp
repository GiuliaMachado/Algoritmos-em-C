#include <bits/stdc++.h>
using namespace std;
#define endl	"\n" // n é mais rapido que endl
#define int		long long  //o limite de memoria suporta long long

void solve(){
	int a, b, c; 
	cin >> a >> b >> c;
	int sum = a + b +c;
	sum -= min({a,b,c});
	if(sum>=10) cout << "YES\n";
	else cout << "NO\n";
	

}
signed main(){ //signed equivale ao int
	//ios_base::sync_with_stdio(0); cin.tie(0); para divs mais dificeis, acelera o codigo
	//quando precisa resolver o problema varias vezes
	int t; cin >> t; while(t--)
	solve();
	
}