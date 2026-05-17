#include <iostream>
#include <string>
using namespace std;

int fib(int n, int* c) {
    if (n <= 1) {
        return n;
    }

    *c += + 2;
    return fib(n-1, c) + fib(n-2, c);
}

int main() {
    string R = "";
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int cn;
        int cc = 0;

        cin >> cn;

        int result = fib(cn, &cc);

        R += "fib(" + to_string(cn) + ") = " + to_string(cc) + " calls = " + to_string(result) + "\n";
    }

    cout << R;

    return 0;
}