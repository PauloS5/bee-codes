#include <iostream>

using namespace std;

int main() {

    int n, ttlG = 0, ttlV = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        char T;
        int C;

        cin >> T >> C;

        if (T == 'V')
            ttlV += C;
        else
            ttlG += C;
    }

    if (ttlV >= ttlG)
        cout << "A greve vai parar." << endl;
    else
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;

    return 0;
}