#include <iostream>
#include <string>
using namespace std;

int somar(int x) {
	int ttl = 1;
	for (int i = x; i >= 0; i--)
		ttl += i;
	return ttl;
}

int main() {
	int n;

	cin >> n;
	string resp[n];

	for (int i = 0; i < n; i++) {
		string j1, j2;
		cin >> j1 >> j2;

		if (j1 == "papel" and j1 == j2) {
			resp[i] = "Ambos venceram";
			continue;
		}
		if (j1 == "pedra" and j1 == j2) {
			resp[i] = "Sem ganhador";
			continue;
		}
		if (j1 == "ataque" and j1 == j2) {
			resp[i] = "Aniquilacao mutua";
			continue;
		}

		if (
			(j1 == "ataque" and j2 == "pedra")
			|| (j1 == "pedra" and j2 == "papel")
			|| (j1 == "ataque" and j2 == "papel")
		) {
			resp[i] = "Jogador 1 venceu";
			continue;
		}
		resp[i] = "Jogador 2 venceu";
	}

	for (string r : resp)
		cout << r << endl;

	return 0;
}