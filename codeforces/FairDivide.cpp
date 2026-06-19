#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        long long toplam = 0; 
        int one_counter = 0;
        int two_counter = 0;
        for (int i = 0; i<n; i++){
            cin >> arr[i];
            toplam += arr[i];
            if (arr[i] % 2 != 0){
                one_counter += 1;
            }
            two_counter += 1;
        }
        if (toplam % 2 != 0){
            cout << "NO" << endl;
        } else if (toplam % 2 == 0 && n % 2 == 0){
            cout << "YES" << endl;
        } else if (toplam % 2 == 0 && n % 2 != 0 && one_counter == 0){
            cout << "NO" << endl;
        } else if (toplam % 2 == 0 && n % 2 != 0 && (one_counter / two_counter % 2 == 0)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0;
}