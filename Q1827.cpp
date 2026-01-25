#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
 
int main() {
	int i, j;
	int in;
	vector<int> casos;
	
	while (cin >> in) {
		if (in == 0)
			break;
		casos.push_back(in);
	}

	
	for (int c : casos) {
		vector<vector<short int>> matriz[c][c];
		for (i = 0; i < c; i++) {
			for (j = 0; j < c; j++) {
				if (i == c/2 && j == i) {
					cout << 4;
					continue;
				}
				if (
					(i >= c/3 && i <= c-(c/3)-1)
					&& (j >= c/3 && j <= c-(c/3)-1)
				) {
					cout << 1;
					continue;
				}
				if (i == j) {
					cout << 2;
					continue;
				}
				if (i+j == c-1) {
					cout << 3;
					continue;
				}
				cout << 0;
			}
			cout << "\n";
		}
		cout << "\n";
	}
    return 0;
}