#include <iostream>
#include <string>
using namespace std;

int main() {
    string caso;
    
    getline(cin, caso);

    if (caso.length() > 80)
        cout << "NO";
    else
        cout << "YES";
    cout << endl;

    return 0;
}