#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned long long int n;
    vector<unsigned long long int> C;

    while(cin >> n)
        if (n == -1)
            break;
        else
            C.push_back(n);
    
    for (unsigned long long int c : C)
        if (c <= 1)
            cout << 0 << endl;
        else 
            cout << c-1 << endl;

    return 0;
}