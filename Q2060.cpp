#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    int caso;
    cin >> n;

    int ttl_2 = 0;
    int ttl_3 = 0;
    int ttl_4 = 0;
    int ttl_5 = 0;
    for (int i = 0; i < n; i++) {
        cin >> caso;

        if (caso % 2 == 0)
            ttl_2++;
        if (caso % 3 == 0)
            ttl_3++;
        if (caso % 4 == 0)
            ttl_4++;
        if (caso % 5 == 0)
            ttl_5++;
    }

    printf("%d Multiplo(s) de 2\n", ttl_2);
    printf("%d Multiplo(s) de 3\n", ttl_3);
    printf("%d Multiplo(s) de 4\n", ttl_4);
    printf("%d Multiplo(s) de 5\n", ttl_5);

    return 0;
}