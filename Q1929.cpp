#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	vector<int> casos(4);

	for (int i = 0; i < 4; i++)
		cin >> casos[i];

	for (int i = 0; i < 4; i++)
	for (int j = i+1; j < 4; j++)
	for (int k = j+1; k < 4; k++) {
		if (
			casos[i]+casos[j] > casos[k]
			&& casos[j]+casos[k] > casos[i]
			&& casos[k]+casos[i] > casos[j]
		) {
			cout << "S" << endl;
			return 0;
		}
	}

	cout << "N" << endl;

    return 0;
}