#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    vector<int> R;

    while (cin >> m >> n) {
        int Ti = 0, Tj = 0, Pi = 0, Pj = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int valor;
                cin >> valor;

                if (valor == 1) {
                    Ti = i;
                    Tj = j;
                }
                if (valor == 2) {
                    Pi = i;
                    Pj = j;
                }
            }
        }

        R.push_back(abs(Tj-Pj) + abs(Ti-Pi));
    }

    for (int r : R)
        cout << r << endl;

    return 0;
}