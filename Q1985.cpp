#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, temp1, temp2;
	
	cin >> n;
	int casos[n][2];
	double precos[] = {1.50, 2.50, 3.50, 4.50, 5.50};

	for (int i = 0; i < n; i++)
		cin >> casos[i][0] >> casos[i][1];
	
	double ttl = 0.0;
	for (int *c : casos) {
		ttl += precos[c[0] - 1001] * c[1];
	}
	
	cout << fixed << setprecision(2) << ttl <<endl;
	cout.unsetf(ios::fixed);

	return 0;
}