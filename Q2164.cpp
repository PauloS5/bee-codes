#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

double fib(int n) {
    return (pow(((1.0+sqrt(5))/2.0), n) - pow(((1.0-sqrt(5))/2.0), n)) / sqrt(5.0);
}

int main() {
    int n;

    cin >> n;

    printf("%.1f\n", fib(n));

    return 0;
}