#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    int limit = 1 << n;

    for (int i = 0; i < limit; i++) {
        int gray = i ^ (i >> 1);

        for (int j = n-1; j >= 0; j--){
            if (gray & (1 << j)) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << "\n";
    }



return 0;
}