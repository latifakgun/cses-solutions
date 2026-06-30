#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char x;
    cin >> n;
    cin >> x; 
    vector<string> s;
    string temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        s.push_back(temp);
    }

    int index = x-'A';
    bool flag = false;
    for(int i=0;i<n;i++){
        if(s[i][index] == 'o'){
            flag = true;
        }
    }
    if(flag==true)cout << "Yes";
    else cout << "No";

    return 0;
}