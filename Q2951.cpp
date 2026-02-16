#include <iostream>
#include <map>

using namespace std;

int main() {
    map<char, int> runas;
    int n, amzd, ttl = 0;

    cin >> n >> amzd;

    for (int i = 0; i < n; i++) {
        char chr;
        int val;
        cin >> chr >> val;
        runas[chr] = val;
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        char chr;
        cin >> chr;
        ttl += runas[chr];
    }

    cout << ttl << endl;
    if (ttl >= amzd)
        cout << "You shall pass!" << endl;
    else
        cout << "My precioooous" << endl;

    return 0;
}