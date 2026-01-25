#include <iostream>
using namespace std;

int main() {
    int c1, c2, c3;

    cin >> c1 >> c2 >> c3;

    if (c1 + c2 == c3
        || c2 + c3 == c1
        || c3 + c1 == c2
        || c1 == c2
        || c2 == c3
        || c3 == c1)
        cout << 'S';
    else
        cout << 'N';
    cout << endl;
    return 0;
}