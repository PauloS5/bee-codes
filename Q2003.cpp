#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string caso;
	int hora, min;
	vector<int> resps;

	while (cin >> caso) {
		hora = stoi(caso.substr(0, 1));
		min = stoi(caso.substr(2, 2));

		min += 60;
		hora += min/60;
		min %= 60;

		hora -= 8;
		if (hora < 0) {
			resps.push_back(0);
			continue;
		}
		resps.push_back(hora * 60 + min);
	}

	for (int r : resps)
		cout << "Atraso maximo: " << r << endl;

	return 0;
}