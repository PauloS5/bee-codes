#include <iostream>
using namespace std;
 
int main() {
	int r, in;
	r = 0;
	for (int i = 0; i < 4; i++) {
		cin >> in;
		r += in;
	}

	cout << r-3 << endl;

    return 0;
}