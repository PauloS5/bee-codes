#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string R = "";

    cin >> n;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;

        R += "resposta " + to_string(i+1) + ": " + to_string(c) + "\n";
    }

    cout << R;

    return 0;
}