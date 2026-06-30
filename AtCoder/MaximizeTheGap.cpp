#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    vector <int> arr(2*n);

    for (int i = 0; i < 2*n; i+=2){
        cin >> arr[i] >> arr[i+1];
    }
    vector <int> sirali = arr;
    sort(sirali.begin(),sirali.end());
    int biggest = sirali[(2*n)-1];
    int biggest_minus = biggest - 1;
    int biggest_sayac = 0;
    int biggest_minus_sayac = 0;
    
    for (int x : arr) {
        if (x == biggest) {
            biggest_sayac++;
        } else if (x == biggest_minus) {
            biggest_minus_sayac++;
        }
    }




    for (int i = 0; i < 2*n; i++){
        if(abs(arr[i] - biggest) > 1){
            cout << 0;
        }
        else if (abs(arr[i] - biggest) == 0){
            if (biggest_sayac){
                float kazanilan = pow((float(1/2)),biggest_sayac) + pow((float(1/2)),biggest_sayac+1);
            } else {

            }
        }
    }
    


    return 0;
}