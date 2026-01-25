#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> R;
    int n, u;
    while(cin >> n >> u) {
        int contador = 0;   
        for (int c = 0; c < n; c++) {
            int i, j;
            cin >> i >> j;

            if (i == u && !j)
                contador++;
        }
        R.push_back(contador);
    }

    for (int r : R) {
        cout << r << endl;
    }
}