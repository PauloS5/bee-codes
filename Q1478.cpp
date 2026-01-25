#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int i, j, aux;
	int in;
	vector<int> casos;
	
	while (cin >> in) {
		if (in == 0)
			break;
		casos.push_back(in);
	}

	
	for (int c : casos) {
		for (i = 0; i < c; i++) {
			aux = 0;
			for (j = i; j > 0; j--) {
				aux++;
				if (j+1 < 100)
					cout << " ";
				if (j+1 < 10)
					cout << " ";

				cout << j+1;

				if (aux != c)
					cout << " ";
			}
			for (; j < c-i; j++) {
				aux++;
				if (j+1 < 100)
					cout << " ";
				if (j+1 < 10)
					cout << " ";

				cout << j+1;

				if (aux != c)
					cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
 
    return 0;
}