#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    double n;
    vector<double> C;

    while (cin >> n)
        C.push_back(n);

    for (double c : C) {
        if (c == 360.0 ) c = 0.0;

        if (c < 90) cout << "Bom Dia!!";
        else if (c < 180) cout << "Boa Tarde!!";
        else if (c < 270) cout << "Boa Noite!!";
        else cout << "De Madrugada!!";
        cout << endl;

        int mins = 360;
        mins += static_cast<int>(c*4);

        int horas = mins / 60;
        
        printf("%02d:%02d:00\n", horas%24, mins%60);
    }
    

    return 0;
}