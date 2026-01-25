#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, N;
    vector<int> casos;
    
    while (true) {
        cin >> T;

        if (T == 0)
            break;

        for (int i = 0; i < T; i++) {
            cin >> N;
            casos.push_back(N);
        }
    }

    for (int c : casos) {
        cout << (c << 1) - (c % 2 == 1 ? 1 : 2) << endl;
    }

    return 0;
}