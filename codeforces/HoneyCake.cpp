#include <bits/stdc++.h>

using namespace std;

void printPrimeFactors(int n) {
    while (n % 2 == 0) {
        std::cout << 2 << " ";
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            std::cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    cout << printPrimeFactors(x);

    return 0;

}   