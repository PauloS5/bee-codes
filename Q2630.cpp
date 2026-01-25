#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int R[n];
    for (int i = 0; i < n; i++) {
        string method;
        cin >> method;

        int r, g, b;
        cin >> r >> g >> b;

        int p;
        if (method == "eye")
            p = static_cast<int>(0.3*r + 0.59*g + 0.11*b);
        if (method == "mean")
            p = static_cast<int>((r+g+b)/3.0);
        if (method == "max")
            p = static_cast<int>(max({r, g, b}));
        if (method == "min")
            p = static_cast<int>(min({r, g, b}));
        
        R[i] = p;
    }

    for (int i = 0; i < n; i++) {
        cout << "Caso #" << i+1 << ": " << R[i] << endl;
    }

    return 0;
}