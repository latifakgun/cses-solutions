#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main () {

    int n,m;
    cin >> n >> m;
    vector<vector<char>> matrix(n,vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < m; j++){
            if((i+j) % 2 == 0 && matrix[i][j] != 'A'){
                matrix[i][j] = 'A';
            } else if ((i+j) % 2 == 0 && matrix[i][j] == 'A'){
                matrix[i][j] = 'B';
            } else if((i+j) % 2 != 0 && matrix[i][j] != 'C'){
                matrix[i][j] = 'C';
            } else if ((i+j) % 2 != 0 && matrix[i][j] == 'C') {
                matrix[i][j] = 'D';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cout << matrix[i][j];
        }
        cout << "\n";
    }
    return 0;
}

