#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<unsigned long long> p(19, 1);
    
    for (int i = 1; i <= 18; i++) {
        p[i] = p[i - 1] * 10;
    }
    vector<unsigned long long> arr(19, 0);
    for (int i = 1; i <= 18; i++) {
        arr[i] = p[i - 1] * 9 * i;
    }

    int q;
    cin >> q;

    while (q--){
        unsigned long long k;
        cin >> k;

        unsigned long long toplam = 0;
        int kacinci_basamak = 1;

        for (int i = 0; i < 18; i++){
            if (toplam + arr [i] >= k){
                kacinci_basamak = i;
                break;
            }
            toplam += arr[i];
        }

        unsigned long long kalan_k = k - toplam;
        
        unsigned long long kacinci_sayi = (kalan_k - 1) / kacinci_basamak;
        
        unsigned long long tam_n = p[kacinci_basamak - 1] + kacinci_sayi;
        
        int rakam_indeksi = (kalan_k - 1) % kacinci_basamak;
        
        string metinSayi = to_string(tam_n);
        cout << metinSayi[rakam_indeksi] << "\n";
    }
}
