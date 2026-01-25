#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int S, B, A;
    int S1, B1, A1;
    int ttl_S = 0, ttl_B = 0, ttl_A = 0;
    int ttl_S1 = 0, ttl_B1 = 0, ttl_A1 = 0;
    string nome;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, nome);

        cin >> S >> B >> A;
        cin >> S1 >> B1 >> A1;

        ttl_S += S;
        ttl_B += B;
        ttl_A += A;
        ttl_S1 += S1;
        ttl_B1 += B1;
        ttl_A1 += A1;
    }

    double respS = (static_cast<double>(ttl_S1) / static_cast<double>(ttl_S)) * 100.0;
    double respB = (static_cast<double>(ttl_B1) / static_cast<double>(ttl_B)) * 100.0;
    double respA = (static_cast<double>(ttl_A1) / static_cast<double>(ttl_A)) * 100.0;

    printf("Pontos de Saque: %.2f %%.\n", respS);
    printf("Pontos de Bloqueio: %.2f %%.\n", respB);
    printf("Pontos de Ataque: %.2f %%.\n", respA);
}