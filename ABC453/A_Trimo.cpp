#include <iostream>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string s;
    bool flag = false;

    cin >> n >> s;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == 'o') {
            if(flag) cout << s[i];
        }
        else {
            flag = true;
            cout << s[i];
        }
    }
    return 0;
}