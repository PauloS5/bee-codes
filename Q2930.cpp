#include <iostream>

using namespace std;

int main() {
    int data_entrega, data_final;

    cin >> data_entrega >> data_final;

    int dif = data_final - data_entrega;

    if (dif < 0) {
        cout <<  "Eu odeio a professora!" << endl;
    }
    else if (dif >= 3) {
        cout << "Muito bem! Apresenta antes do Natal!" << endl;
    }
    else {
        cout << "Parece o trabalho do meu filho!" << endl;
        
        if (data_final + 2 <= 24) {
            cout << "TCC Apresentado!" << endl;
        } else {
            cout << "Fail! Entao eh nataaaaal!" << endl;
        }
    }

    return 0;
}