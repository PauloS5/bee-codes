#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> R;
    int n, Amin, Amax;

    while (cin >> n >> Amin >> Amax) {
        int ttl = 0;
        for (int i = 0; i < n; i++) {
            int A;
            cin >> A;
            if (A >= Amin and A <= Amax) {
                ttl++;
            }
        }
        R.push_back(ttl);
    }

    for (int r : R) {
        cout << r << endl;
    }

    return 0;
}