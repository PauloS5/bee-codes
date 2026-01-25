#include <iostream>
#include <string>
using namespace std;

int main() {
    string caso;

    getline(cin, caso);

    if (caso.length() > 140)
        cout << "MUTE" << endl;
    else
        cout << "TWEET" << endl;

    return 0;
}