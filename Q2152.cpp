#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    int casos[n][3];

    for (int i  = 0; i < n; i++) {
        cin >> casos[i][0];
        cin >> casos[i][1];
        cin >> casos[i][2];
    }

    for (int *c : casos)
        printf("%02d:%02d - A porta %s!\n", c[0], c[1], (c[2] ? "abriu":"fechou"));

    return 0;
}