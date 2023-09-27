#include<bits/stdc++.h>
using namespace std;
int main(){
	int numero, unidade = 0, resto =0, qtd, i =0, inverso =0;
	cin >> numero;
	cin >> qtd;
	while(i <= qtd){
		unidade = numero%10;
		resto = numero / 10;
		inverso = inverso*10 + unidade ;
		numero = resto ;
		i = i + 1;
	}
	cout << inverso/10;
}