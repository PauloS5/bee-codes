#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() 
{
	int n;
	int maior_matr, temp_matr;
	double maior_nota, temp_nota;

	cin >> n;
	cin >> maior_matr;
	cin >> maior_nota;
	for (int i = 1; i < n; i++) {
		cin >> temp_matr;
		cin >> temp_nota;

		if (temp_nota > maior_nota) {
			maior_nota = temp_nota;
			maior_matr = temp_matr;
		}
	}

	if (maior_nota >= 8.0) {
		cout << maior_matr << endl;
	} else {
		cout << "Minimum note not reached" << endl;
	}

    return 0;
}