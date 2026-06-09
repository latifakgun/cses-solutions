#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long answer = 1;
    long long MOD = 1000000007; 

    for (int i = 0; i < n; i++) {
        answer = (answer * 2) % MOD;
    }

    cout << answer << "\n";

    return 0;
}