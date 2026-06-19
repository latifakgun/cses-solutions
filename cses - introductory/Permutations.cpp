#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main () {
    long long n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    if (n == 1) {
        cout << "1\n";
        return 0;
    }
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    // Sonra TEK sayıları yazdır
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    return 0;
}

