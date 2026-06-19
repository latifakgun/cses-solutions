#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    string line;
    cin >> line;

    sort(line.begin(), line.end());

    unordered_set<char> distinct_chars(line.begin(), line.end());

    ptrdiff_t occurrences = std::count(line.begin(), line.end(), 'a');

    for (char i = 0;i < line.length();i++){
        if (line[i] == line[i+1]){
            swap(line[i],line[i+1]);
        }
    }
    

    cout << "Distinct & Sorted: " << line << std::endl;

    return 0;
}