#include <iostream>
#include <string>
using namespace std;

string musicas[] = {
    "PROXYCITY",
    "P.Y.N.G.",
    "DNSUEY!",
    "SERVERS",
    "HOST!",
    "CRIPTONIZE",
    "OFFLINE DAY",
    "SALT",
    "ANSWER!",
    "RAR?",
    "WIFI ANTENNAS"
};

int main() {
    int n;
    int x, y;

    cin >> n;
    int R[n];

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        R[i] = x+y;
    }

    for (int r : R)
        cout << musicas[r] << endl;

    return 0;
}