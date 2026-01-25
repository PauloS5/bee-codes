#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    cin.ignore();
    for (int i = 0; i < n; i++) {
        string nome;
        getline(cin, nome);
    }

    for (int i = 0; i < n; i++) {
        cout << "Y" << endl;
    }

    return 0;
}