#include <iostream>
#include <string>
using namespace std;

int main() {
    string acao;
    int ttlP = 0;
    int ttlJ = 0;
    int valor;

    while (true) {
        cin >> acao;

        if (acao[0] == 'A'){
            break;
        } else {
            cin >> valor;

            if (acao[0] == 'S') {
                ttlP += valor;
                ttlJ++;
            } else {
                ttlP -= valor;
                ttlJ--;
            }
        }
    }

    cout << ttlP << endl << ttlJ << endl;

    return 0;
}