/*
 * author: calgagi
 *         Calvin Gagliano 
 */
#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ull unsigned long long
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<ld, ld>
#define f first
#define s second

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<int> ans;
    bool flip = 0;
    for (int i = 0; i < n; i++) {
        if (!flip && a[i] == b[n-i-1]) {
            ans.push_back(0);
        } else if (flip && a[n-i-1] != b[n-i-1]) {
            ans.push_back(0);
        }
        flip = !flip;
        ans.push_back(n-i-1);
    }

    cout << ans.size() << " ";
    for (int i = 0; i < (int) ans.size(); i++) {
        cout << ans[i]+1 << " ";
    }
    cout << endl;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    srand(chrono::steady_clock::now().time_since_epoch().count()); 
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
