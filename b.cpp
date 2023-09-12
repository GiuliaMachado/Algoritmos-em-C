#include<iostream>
using namespace std;

int main(){
    
    int n_testes, timur, pessoas = 0;
    cin >> n_testes;
    for(int i = 0; i < n_testes; i++){
        cin >> timur;
        for(int j = 0; j < 3; j++){
            int p;
            cin >> p;
            if(p > timur){
                pessoas = pessoas +1;
            }
        }
        cout << pessoas << endl;
        pessoas = 0;
    }
    
}