#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string frase;

    cin >> n;

    cin.ignore();
    for (int i = 0; i < n; i++)
        getline(cin, frase);
    
    for (int i = 0; i < n; i++)
        cout << "I am Toorg!" << endl;
}