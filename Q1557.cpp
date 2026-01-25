#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
 
int main() {
	int i, j, k, aux;
	unsigned long long int r;
	int in;
	vector<int> casos;
	
	while (cin >> in) {
		if (in == 0)
			break;
		casos.push_back(in);
	}

	
	for (int c : casos) {
		r = static_cast<unsigned long long int>(pow(2, (c-1)*2));
		int len_of_great = to_string(r).length();
		for (i = 0; i < c; i++) {
			aux = 0;
			for (j = i; j < i+c; j++) {
				aux++;
				r = static_cast<unsigned long long int>(pow(2, j));
				for (		
					k = 0; 
					k < len_of_great - to_string(r).length(); 
					k++)
					cout << " ";

				cout << r;

				if (aux != c)
					cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
 
    return 0;
}