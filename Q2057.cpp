#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
int main() 
{
	int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	int ttl = n1 + n2 + n3;

	if (ttl > 23)
		ttl -= 24;
	if (ttl < 0) 
		ttl -= -24;
		
	cout << ttl << endl;

    return 0;
}