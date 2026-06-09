#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int weight (long long a, long long b) {
    
    int ways = max(a, b) / __gcd(a, b);

    cout << ways << endl;
    return 0;
}

int main() {

    long long n, a, b;
    cin >> n >> a >> b;
    
    if (a % 2 == 0 && b % 3 == 0 || a % 3 == 0 && b % 2 == 0) {
        int x = a - a % 6;
        weight (a, x);
        for (int i = b; i > a; i-=6)
            y = ;
        return 0;
    } 
    
    else if (__gcd(a, b) == 1) {
        cout << 0 << endl;
        return 0;
    }

    
    
    
    
    
    
    
    
    
    return 0;
}