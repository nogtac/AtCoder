#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, ans = 0; cin >> n;
    vector<long long> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < (1<<n); i++) {
        long long current_pos = 1;
        int current_count = 0;

        for(int j = 0; j < n; j++) {
            long long move = v[j] * 2;
            long long next_pos;

            if((i >> j) & 1) next_pos = current_pos + move;
            else next_pos = current_pos - move;

            if((current_pos > 0 && next_pos < 0) || (current_pos < 0 && next_pos > 0))
                current_count++;

            current_pos = next_pos;
        }

        ans = max(ans, current_count);
    }

    cout << ans;

    return 0;
}