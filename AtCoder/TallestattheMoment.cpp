#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; 

    vector<int> H(n);
    vector<int> L(n);

    for (int i = 0; i < n; i++) {
        cin >> H[i] >> L[i];
    }

    vector<int> suf_max(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suf_max[i] = max(H[i], suf_max[i + 1]);
    }

    int q;
    cin >> q; 

    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        
        int idx = upper_bound(L.begin(), L.end(), t) - L.begin();
        
        cout << suf_max[idx] << "\n";
    }

    return 0;
}