#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int i;
    int a, b, q, r;
    
    cin >> a;
    cin >> b;
    
	for (i = 0; i < abs(b); i++) {
		r = i;
		q = (a - r)/b;
		
		if (a == ((b * q) + r)) {
			break;
		}
	}

	cout << q << " " << r << endl;
 
    return 0;
}