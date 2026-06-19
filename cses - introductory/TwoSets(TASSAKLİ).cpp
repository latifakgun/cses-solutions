#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<long long> vector1, vector2;
    long long n;
    cin >> n;
    if ((n * (n+1) / 2) % 2 != 0) {
        cout << "NO" << endl;
    } else if (n == 4) {
        cout << "YES" << endl;
        cout << "2\n1 4\n2\n2 3\n";
    } else if (n == 3) {
        cout << "YES" << endl;
        cout << "2\n1 2\n1\n3\n";
    } else if (n % 4 == 0) {
        long long half = n / 2;
        for (long long i = 1; i < half; i += 2) {
            vector1.push_back(i);
        }
        for (long long i = 2; i <= half; i += 2) {
            vector2.push_back(i);
        }
        for (long long i = half + 1; i < n; i += 2) {
            vector2.push_back(i);
        }
        for (long long i = half + 2; i <= n; i += 2) {
            vector1.push_back(i);
        }
        cout << "YES" << endl;
        cout << vector1.size() << "\n";
        for (long long i = 0; i < vector1.size(); ++i) {
            cout << vector1[i] << " ";
        }
        cout << endl;
        cout << vector2.size() << "\n";
        for (long long i = 0; i < vector2.size(); ++i) {
            cout << vector2[i] << " ";
        }
        cout << endl;
    
    } else if (n % 4 == 3 && n % 3 == 1) {
        for (long long i = 1; i <= n - 1; i += 6) {
            vector1.push_back(i);
            vector1.push_back(i+1);
            vector2.push_back(i+2);
            vector1.push_back(i+3);
            vector2.push_back(i+4);
            vector2.push_back(i+5);
        }
        vector1.push_back(n);
        cout << "YES" << endl;
        cout << vector1.size() << "\n";
        for (long long i = 0; i < vector1.size(); ++i) {
            cout << vector1[i] << " ";
        }
        cout << endl;
        cout << vector2.size() << "\n";
        for (long long i = 0; i < vector2.size(); ++i) {
            cout << vector2[i] << " ";
        }
        cout << endl;
    
    } else if (n % 4 == 3 && n % 3 == 2) {
        vector2.push_back(1);
        vector1.push_back(2);
        vector1.push_back(3);
        for (long long i = 4; i <= n; i += 2) {
            vector1.push_back(i);
            vector2.push_back(i+1);
        }
        cout << "YES" << endl;
        cout << vector1.size() << "\n";
        for (long long i = 0; i < vector1.size(); ++i) {
            cout << vector1[i] << " ";
        }
        cout << endl;
        cout << vector2.size() << "\n";
        for (long long i = 0; i < vector2.size(); ++i) {
            cout << vector2[i] << " ";
        }
        cout << endl;
    
    }  else if (n % 4 == 3 && n % 3 == 0) {
        for (long long i = 1; i <= n - 3; i += 6) {
            vector1.push_back(i);
            vector1.push_back(i+1);
            vector2.push_back(i+2);
            vector1.push_back(i+3);
            vector2.push_back(i+4);
            vector2.push_back(i+5);
        }
        vector1.push_back(n-2);
        vector2.push_back(n-1);
        vector1.push_back(n);
        cout << "YES" << endl;
        cout << vector1.size() << "\n";
        for (long long i = 0; i < vector1.size(); ++i) {
            cout << vector1[i] << " ";
        }
        cout << endl;
        cout << vector2.size() << "\n";
        for (long long i = 0; i < vector2.size(); ++i) {
            cout << vector2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}











/* 
1 2 4 7

3 5 6

#8 OK
1 3 6 8

2 4 5 7

#11 OK
2 3 4 6 8 10

1 5 7 9 11

#12 OK
1 3 5 8 10 12
2 4 6 7 9 11

#15

1 2 4 7 8 10 13 15 = 2 - 1 1 - 2 1 - 1 1- 1
3 5 6 9 11 12 14

*/

