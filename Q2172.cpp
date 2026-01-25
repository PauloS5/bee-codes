#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned long long x, m;
    vector<unsigned long long> R;
    
    while(true) {
        cin >> x >> m;
        if ( x == 0) 
            break;
        R.push_back(x*m);
    }
    for (unsigned long long r : R)
        cout << r << endl;
            
    return 0;
}