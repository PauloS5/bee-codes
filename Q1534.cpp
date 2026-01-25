#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int i;
	vector<int> casos;
	int in;
	
	while (cin >> in)
		casos.push_back(in);
	
	for (int c : casos) {
		vector<vector<int>> matriz(c, vector(c, 3));

		for (i = 0; i < c; i++) {
			matriz[i][i] = 1;
			matriz[i][c-1-i] = 2;
		}

		for (vector<int> linha : matriz) {
			for (int valor : linha)
				cout << valor;
			cout << endl;
		}
	}
 
    return 0;
}