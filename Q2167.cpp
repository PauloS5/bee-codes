#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int casos[n];

    for (int i = 0; i < n; i++)
        cin >> casos[i];

    int pos = 0;
    for (int i = 0; i < n-1; i++) {
        if (casos[i] > casos[i+1]) {
            pos = i + 1 + 1;
            break;
        }
    }

    cout << pos << endl;

    return 0;
}