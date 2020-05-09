/*
 * author: calgagi
 *         Calvin Gagliano 
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ii pair<int, int>
#define ar array
#define f first
#define s second
#define dd long double

void solve() {
    int n;
    cin >> n;

    bitset<8001> bs, cur_bs;
    vector<int> a(n);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cur_bs <<= a[i];
        bs |= cur_bs;
        cur_bs[a[i]] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (bs[a[i]]) {
            ans++;
        }
    }

    cout << ans << endl;


    return;
}

int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    srand(chrono::steady_clock::now().time_since_epoch().count()); 
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
