#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
    long long n , x, y, z;
    cin >> n >> x >> y >> z;
    

    long long nonai = (n + x + y -1) / (x + y);
    long long ai = 0;
    if (x*z >= n) {
        ai = (n + x - 1) / x;

    } else {
        long long kalan = n - (x*z);
        long long ortak_hiz = x + 10 * y;
        ai = (kalan + ortak_hiz - 1) / ortak_hiz + z;
    }

    cout << min(nonai, ai) << "\n";

    }
    return 0;
}