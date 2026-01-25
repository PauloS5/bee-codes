#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> C;

    while (cin >> n)
        C.push_back(n);

    for (int c : C) {
        if (c % 360 < 90) cout << "Bom Dia!!";
        else if (c % 360 < 180) cout << "Boa Tarde!!";
        else if (c % 360 < 270) cout << "Boa Noite!!";
        else cout << "De Madrugada!!";
        cout << endl;
    }
    

    return 0;
}