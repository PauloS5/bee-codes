#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    printf("%.1f %.1f\n", n/log(n), n/log(n)*1.25506);

    return 0;
}