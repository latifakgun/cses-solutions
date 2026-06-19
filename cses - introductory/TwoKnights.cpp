#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        long long totalWays = (long long)i * i * (i*i - 1) / 2;
        long long attackingWays = ((long long)i - 1) * (i - 2) * 4;
        cout << totalWays - attackingWays << endl;
    }
}