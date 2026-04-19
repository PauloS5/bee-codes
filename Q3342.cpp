#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cin >> n;

    cout << to_string(static_cast<int>((n*n)/2) + ((n*n)%2)) + " casas brancas e " + to_string(static_cast<int>((n*n)/2)) + " casas pretas" << endl;

    return 0;
}