#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<double> R;

    while (cin >> n) {
        double r;
        cin >> r;
        for (int i = 0; i < n-1; i++) {
            double in;
            cin >> in;
            r = fmin(r, in);
        }
        R.push_back(r);
    }

    for (double r : R) {
        cout << r << endl;
    }

    return 0;
}