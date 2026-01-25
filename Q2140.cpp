#include <iostream>
#include <vector>
using namespace std;

int notas[] = {2, 5, 10, 20, 50, 100};

int main() {
    int temp1, temp2;
    bool possivel, continuar;
    
    vector<vector<int>> casos;
    
    while (true) {
        cin >> temp1;
        cin >> temp2;

        if (temp1 == 0) {
            break;
        }

        vector<int> temp3;
        temp3.push_back(temp1);
        temp3.push_back(temp2);

        casos.push_back(temp3);
    }

    for (vector<int> c : casos) {
        int ttl_troco = c[1]-c[0];

        if (ttl_troco < 4) {
            cout << "impossible" << endl;
            continue;
        };
        if (ttl_troco > 200) {
            cout << "impossible" << endl;
            continue;
        }
        
        possivel = false;
        for (int n1 : notas) {
            if (n1 > ttl_troco)
                break;
            continuar = false;
            for (int n2 : notas) {
                if (n1 + n2 == ttl_troco) {
                    possivel = true;
                    break;
                }
                if (n1 + n2 == ttl_troco) {
                    continuar = true;
                    break;
                }
            }
            if (possivel)
                break;
            if (continuar)
                continue;
        }
        if (possivel) {
            cout << "possible" << endl;
            continue;
        }
        cout << "impossible" << endl;
    }

    return 0;
}