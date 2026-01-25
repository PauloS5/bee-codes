#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int pulo, n, cano1, cano2;
	bool venceu = true;
	
	cin >> pulo;
	cin >> n;
	
	cin >> cano1;
	for (int i = 1; i < n; i++) {
		cin >> cano2;
		
		if (abs(cano1-cano2) > pulo) {
			venceu = false;
		}

		cano1 = cano2;
	}

	if (venceu) {
		cout << "YOU WIN" << endl;
	} else {
		cout << "GAME OVER" << endl;
	}
    return 0;
}