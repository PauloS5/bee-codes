#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int somar(int x) {
	int ttl = 1;
	for (int i = x; i >= 0; i--)
		ttl += i;
	return ttl;
}

int main() {
	double temp;
	vector<double> casos_vol;
	vector<double> casos_dia;


	while (cin >> temp) {
		casos_vol.push_back(temp);
		cin >> temp;
		casos_dia.push_back(temp);
	}

	for (int i = 0; i < casos_dia.size(); i++) {
		double r = casos_dia[i]/2.0;
		double A = 3.14 * (r*r);
		double h = casos_vol[i]/A;

		printf("ALTURA = %.2f\n", h);
		printf("AREA = %.2f\n", A);
	}

	return 0;
}