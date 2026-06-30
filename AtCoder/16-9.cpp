#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    if (cin >> x >> y) {
        if (x * 9 == y * 16) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}