#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
	int N, Q;
    cin >> N >> Q;

    vector<long long> arr(N);

    for (int i = 1; i <= Q; i++){
        int A, L, R;
        cin >> A >> L >> R;

        for (int j = 0; j < N; j++) {
            arr[j] = 0;
        }

        for (int k = L - 1; k < R ; k++){
            arr[k] = A;
        }
        int x = 1;

        for (int z = 0; z < N-1; z++){
            if (arr[z] > arr[z+1]){
                
                x += 1;
            }
        }
        cout << x << endl;

        


    }


}
