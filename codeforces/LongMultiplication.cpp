#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string x, y;
    cin >> x >> y;

    bool first_diff_found = false;

    for (int i = 0; i < x.length(); i++) {
        if (!first_diff_found) {
            if (x[i] < y[i]) {
                swap(x[i], y[i]);
            }

            if (x[i] != y[i]) {
                first_diff_found = true;
            }
        } else {
            if (x[i] > y[i]) {
                swap(x[i], y[i]);
            }
        }
    }
    cout << x << "\n" << y << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}