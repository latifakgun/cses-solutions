#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a,b;
    cin >> a >> b;
    if(a+b>n){
        cout << "NO" << endl;
    return;
        }
    else if(a==0 && b==0){
        cout << "YES" << endl;
        for(int i=1;i<=n;i++){
            cout << i << " ";
                }
        cout << endl;
        for(int i=1;i<=n;i++){
            cout << i << " ";
                }
        cout << endl;
        return;
        }
    if(a>0 && b>0){
            cout << "YES" << endl;
        int maxScore = max(a,b);
        int draw = n-a-b;

        string identityRow = "";
        for(int i=1;i<=n;i++){
            identityRow += to_string(i) + " ";
        }

        string secondRow = "";
        int temp = maxScore+1;                 
        for(int i=0;i<min(a,b);i++){
            secondRow += to_string(temp) + " ";
            temp++;
                }
        for(int i=1;i<=n-draw-min(a,b);i++){
            secondRow += to_string(i) + " ";
                }
        for(int i=n-draw+1;i<=n;i++){
            secondRow += to_string(i) + " ";
                }

        if(a>=b){                               
            cout << identityRow << "\n" << secondRow << "\n";
        }else{
            cout << secondRow << "\n" << identityRow << "\n";
        }
        }
    else{
        cout << "NO" << endl;
        return;
        }
}
int main(){
int q;
cin >> q;
while(q--)solve();
return 0;
}