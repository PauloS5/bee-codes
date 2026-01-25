#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string caso;

    getline(cin, caso);

    int ttl1 = count(caso.cbegin(), caso.cend(), '1');

    cout << caso << (ttl1 % 2 == 1) << endl;
            
    return 0;
}