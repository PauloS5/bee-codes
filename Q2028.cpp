#include <iostream>
#include <vector>
using namespace std;

int somar(int x) {
	int ttl = 1;
	for (int i = x; i >= 0; i--)
		ttl += i;
	return ttl;
}

int main() {
	int temp;
	vector<int> casos;


	while (cin >> temp)
		casos.push_back(temp);
	
	int contador = 0;
	for (int c : casos) {
		contador++;
		cout << "Caso " << contador << ": ";

		cout << somar(c) << " numero";
		if (somar(c) > 1)
			cout << "s";
		cout << endl;

		cout << 0;
		for (int i = 1; i <= c; i++)
			for (int j = 0; j < i; j++)
				cout << " " << i;
		cout << endl;
		cout << endl;
	}

	return 0;
}