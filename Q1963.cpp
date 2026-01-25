#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
	double p1, p2;

	cin >> p1 >> p2;

	double dif = p2 - p1;

	double ttl = (100.0 * dif)/p1;

	cout << fixed << setprecision(2) << ttl << "%\n";
	cout.unsetf(ios::fixed);

    return 0;
}