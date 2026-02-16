#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> V;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        V.push_back(v);
    }

    int maior = -1;
    for (int v : V)
        maior = max(maior, v);

    if (maior == V[0])
        cout << 'S' << endl;
    else 
        cout << 'N' << endl;

    return 0;
}