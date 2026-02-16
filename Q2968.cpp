#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int v, n;
    cin >> v >> n;

    float ttl = v*n;

    for (int i = 1; i < 10; i++) {
        cout << static_cast<int>(ceil(ttl*(static_cast<float>(i)/10.0)));

        if (i == 9) 
            cout << endl;
        else
            cout << " ";
    }

    return 0;
}