#include <iostream>
#include <vector>

using namespace std;
 
int main() 
{
	int temp;
	vector<int> casos;

	while (cin >> temp) {
		casos.push_back(temp);
	}

	for (int c : casos) {
		cout << c-1 << endl;
	}

    return 0;
}