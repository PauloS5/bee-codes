#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matriz[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matriz[i][j];

    for (int i = 1; i < m-1; i++)
        for (int j = 1; j < n-1; j++) {
            if (matriz[i-1][j-1] != 7)
                continue;
            if (matriz[i-1][j] != 7)
                continue;
            if (matriz[i-1][j+1] != 7)
                continue;

            if (matriz[i][j-1] != 7)
                continue;
            if (matriz[i][j] != 42)
                continue;
            if (matriz[i][j+1] != 7)
                continue;

            if (matriz[i+1][j-1] != 7)
                continue;
            if (matriz[i+1][j] != 7)
                continue;
            if (matriz[i+1][j+1] != 7)
                continue;

            cout << i+1 << " " << j+1 << endl;
            return 0;
        }
    cout << 0 << " " << 0 << endl;

    return 0;
}