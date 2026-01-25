#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int meses[] = {
    0,
    31,
    31 + 29,
    31 + 29 + 31,
    31 + 29 + 31 + 30,
    31 + 29 + 31 + 30 + 31,
    31 + 29 + 31 + 30 + 31 + 30,
    31 + 29 + 31 + 30 + 31 + 30 + 31,
    31 + 29 + 31 + 30 + 31 + 30 + 31 + 31,
    31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30,
    31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31
};

int main() {
    int temp1, temp2;
    
    vector<vector<int>> casos;
    
    while (cin >> temp1) {
        cin >> temp2;

        vector<int> temp3;
        temp3.push_back(temp1);
        temp3.push_back(temp2);

        casos.push_back(temp3);
    }

    for (vector<int> c : casos) {
        if (c[0]==12 && c[1]==24) {
            cout << "E vespera de natal!" << endl;
            continue;
        }
        if (c[0]==12 && c[1]==25) {
            cout << "E natal!" << endl;
            continue;
        }
        if (c[0]==12 && c[1]>25) {
            cout << "Ja passou!" << endl;
            continue;
        }

        cout << "Faltam " << 360-(meses[c[0]-1] + c[1]) <<" dias para o natal!" << endl;
    }

    return 0;
}