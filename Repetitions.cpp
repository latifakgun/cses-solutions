#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int     main() {
    string n;
    long long current_count = 1;
    long long max_count = 1;
    cin >> n;
    
    for (int i = 1; i < n.length(); i++) {
        if (n[i] == n[i - 1]) {
            current_count += 1;
        } else {
            max_count = max(max_count, current_count);
            current_count = 1;
        }

    }
    max_count = max(max_count, current_count);
    cout << max_count << "\n";
    return 0;
}

