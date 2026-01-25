#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<vector<int>>> C;
    int n, m;

    int size_C = 0;
    while (cin >> n >> m) {
        C.push_back(vector<vector<int>>(n, vector<int>(m)));
        size_C++;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> C[size_C-1][i][j];
            }
        }
    }
    for (vector<vector<int>> c : C) {
        m = c.size();
        n = c[0].size();
        vector<vector<int>> r(m, vector<int>(n));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (c[i][j] == 1) {
                    cout << 9;
                } else {
                    int ttl = 0;
                    if (i-1 >= 0) {
                        ttl += c[i-1][j];
                    }
                    if (j-1 >= 0) {
                        ttl += c[i][j-1];
                    }
                    if (i+1 < m) {
                        ttl += c[i+1][j];
                    }
                    if (j+1 < n) {
                        ttl += c[i][j+1];
                    }
                    cout << ttl;
                }
            }
            cout << endl;
        }
    }

    return 0;
}