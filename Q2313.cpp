#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    if (
        a + b > c
        and b + c > a
        and c + a > b
    ) {
        if (a == b and b == c) {
            cout << "Valido-Equilatero" << "\n";    
            cout << "Retangulo: N" << "\n";    
        } else {
            if (a != b and b != c and c != a) {
                cout << "Valido-Escaleno" << "\n";
            } else {
                cout << "Valido-Isoceles" << "\n";
            }
            if (
                a*a == b*b+c*c
                or b*b == c*c+a*a
                or c*c == a*a+b*b
            ) {
                cout << "Retangulo: S" << endl;
            } else {
                cout << "Retangulo: N" << endl;
            }
        }
    } else {
        cout << "Invalido" << "\n";
    }

    return 0;
}