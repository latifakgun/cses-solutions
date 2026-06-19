#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long z = max(y, x);

        // Katman ÇİFT ise
        if (z % 2 == 0) {
            if (y < x) {
                cout << (z - 1) * (z - 1) + y << "\n";
            } else {
                cout << z * z - x + 1 << "\n";
            }
        } 
        else {
            if (x < y) {    
                cout << (z - 1) * (z - 1) + x << "\n";
            } else {
                cout << z * z - y + 1 << "\n";
            }
        }
    }

    return 0;
}