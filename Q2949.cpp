#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string nome;
    char raca;
    int ttl_X = 0, ttl_H = 0, ttl_E = 0, ttl_A = 0, ttl_M = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nome >> raca;

        switch (raca) {
            case 'X':
                ttl_X++;
                break;
            case 'H':
                ttl_H++;
                break;
            case 'E':
                ttl_E++;
                break;
            case 'A':
                ttl_A++;
                break;
            case 'M':
                ttl_M++;
                break;
        }
    }

    cout << ttl_X << " Hobbit(s)" << endl;
    cout << ttl_H << " Humano(s)" << endl;
    cout << ttl_E << " Elfo(s)"   << endl;
    cout << ttl_A << " Anao(oes)" << endl;
    cout << ttl_M << " Mago(s)"   << endl;

    return 0;
}