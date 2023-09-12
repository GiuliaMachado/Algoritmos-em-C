#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a =0 , b = 0, c = 0;
	int conta;
	for(int i = 0; i < n; i++){
		conta = 0;
		cin >> a;
		cin >> b;
		cin >> c;
		if(a==b){
			cout << conta << endl;
		}
		if(a>b){
			while(a-b>c){
			a = a-c;
			b = b + c;
			conta = conta + 1;
			}
			while(a-b<c && a!=b){
				a = a-(a-b);
				b = b+(a-b);
				conta = conta + 1;
			}
			cout << conta << endl;
		}
		if(b>a){
			while(b-a>c){
			b = b-c;
			a = a + c;
			conta = conta + 1;
			}
			while(b-a<c && a!=b){
				b = b-(a-b);
				a = a+(a-b);
				conta = conta + 1;
			}
			cout << conta << endl;
			}
		}
	} 