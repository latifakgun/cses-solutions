#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O (Zaman sınırına takılmamak için)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    // Toplam formülü: n * (n + 1) / 2
    long long total_sum = n * (n + 1) / 2;

    // Eğer toplam tek sayıysa iki eşit parçaya bölünemez
    if (total_sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    vector<long long> set1, set2;
    long long target = total_sum / 2;

    // n'den 1'e doğru geriye doğru gidiyoruz
    for (long long i = n; i >= 1; i--) {
        // Eğer hedefimizde bu sayıya yer varsa Set 1'e al
        if (target >= i) {
            set1.push_back(i);
            target -= i; // Hedefimizi küçültüyoruz
        } 
        // Yer yoksa mecburen Set 2'ye al
        else {
            set2.push_back(i);
        }
    }

    // Sonuçları yazdır
    cout << set1.size() << "\n";
    for (long long i = 0; i < set1.size(); i++) {
        cout << set1[i] << " ";
    }
    cout << "\n";

    cout << set2.size() << "\n";
    for (long long i = 0; i < set2.size(); i++) {
        cout << set2[i] << " ";
    }
    cout << "\n";

    return 0;
}