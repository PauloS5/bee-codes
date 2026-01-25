#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int ordem;
    
    cin >> n;
    ordem = n+1;

    char quadras[n][n];
    int cameras[n+1][n+1];

    for (int i = 0; i < n+1; i++)
        for (int j = 0; j < n+1; j++)
            cin >> cameras[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (
                // Linhas
                cameras[i][j] && cameras[i][j+1] ||
                cameras[i+1][j] && cameras[i+1][j+1] ||
                // Coluna
                cameras[i][j] && cameras[i+1][j] ||
                cameras[i][j+1] && cameras[i+1][j+1] ||
                // Diagonais
                cameras[i][j] && cameras[i+1][j+1] ||
                cameras[i][j+1] && cameras[i+1][j]
            ) 
                quadras[i][j] = 'S';
            else 
                quadras[i][j] = 'U';
        
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << quadras[i][j];
        cout << endl;
    }
            
            
    return 0;
}