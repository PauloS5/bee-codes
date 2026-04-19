#include <iostream>
#include <string>
using namespace std;

int main() {
    string c;

    cin >> c;

    if (c.length() < 10) 
        cout << "palavrinha\n";
    else
        cout << "palavrao\n";

    return 0;
}
