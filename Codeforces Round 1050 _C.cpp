#include <bits/stdc++.h>
using namespace std;
 
void fabi_solve() {
    int n, m;
    cin >> n >> m;
 
    vector<pair<int, int>> req;
 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        req.push_back({a, b});
    }
 
    int prevt = 0;
    int l= 0, h= 0;
    for (auto [a, b] : req) {
        int d = a - prevt;
        int nl = max(l - d, b);
        int nh = min(h + d, a);
 
        if (nl % 2 != b) nl++;
        if (nh % 2 != b) nh--;
 
        if (nl > nh) {
            nl = nh = b;
        }
        l= nl;
        h = nh;
        prevt= a;
    }
 
    int ans = h+ (m - prevt);
    cout << ans << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        fabi_solve();
    }
    return 0;
}
