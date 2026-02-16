#include <iostream>

using namespace std;

int main() {
 
    int ttl = 0;
    int qtde_porcao;

    cin >> qtde_porcao;
    ttl += qtde_porcao * 300;

    cin >> qtde_porcao;
    ttl += qtde_porcao * 1500;
 
    cin >> qtde_porcao;
    ttl += qtde_porcao * 600;
 
    cin >> qtde_porcao;
    ttl += qtde_porcao * 1000;
 
    cin >> qtde_porcao;
    ttl += qtde_porcao * 150;
 
    ttl += 225;

    cout << ttl << endl;
    
    return 0;
}