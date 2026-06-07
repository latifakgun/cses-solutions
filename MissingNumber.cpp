#include <iostream>
#include <vector>
using namespace std;

int main () {

    long long n;
    long long sum = 0;

    cin >> n;

    vector<int> numbers(n - 1);

    for (int i = 0; i < n-1 ; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n-1; i++) {
        sum += numbers[i];
    }

    cout << (n * (n + 1)) / 2 - sum << "\n";

}