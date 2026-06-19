#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

long long find_min_difference(int index, long long current_sum, const vector<long long>& weights, long long total_sum) {
    if (index == weights.size()) {
        long long sum1 = current_sum;
        long long sum2 = total_sum - current_sum;
        return abs(sum1 - sum2);
    }

    long long choice1 = find_min_difference(index + 1, current_sum + weights[index], weights, total_sum);

    long long choice2 = find_min_difference(index + 1, current_sum, weights, total_sum);

    return min(choice1, choice2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> weights(n);
    long long total_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        total_sum += weights[i];
    }

    long long ans = find_min_difference(0, 0, weights, total_sum);

    cout << ans << "\n";

    return 0;
}