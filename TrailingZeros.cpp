#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    int moves = 0;
    long long n;
    cin >> n;

    while (n > 5) {
            n = n / 5;
            moves += ceil(n);
    }

    if (n == 5) {
        moves = 1;
    }
    cout << moves << endl;
    return 0;
}