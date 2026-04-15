#include <iostream>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, x, last_saved; cin >> t >> x;
    for(int i = 0; i < t+1; i++) {
        int a; cin >> a;
        if(i == 0) {
            cout << 0 << ' ' << a << '\n';
            last_saved = a;
        }
        else {
            if(abs(a-last_saved) >= x) {
                cout << i << ' ' << a << '\n';
                last_saved = a;
            }
        }
    }
    return 0;
}