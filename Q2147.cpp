#include <iostream>
#include <string>
#include <cstdio>
using namespace std; 

int main() {
    int n;
    string caso;
 
    cin >> n;
    int R[n];

    for (int i = 0; i < n; i++) {
        cin >> caso;
        R[i] = caso.length();
    }

    for (int r : R)
        printf("%.2f\n", r/100.0);

    return 0;
}