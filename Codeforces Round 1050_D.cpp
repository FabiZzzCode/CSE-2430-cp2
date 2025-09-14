#include <bits/stdc++.h>
using namespace std;

void fabi_solve() {
    int n;
    cin >> n;

    vector<long long> a(n);

    long long total_even = 0;

    vector<long long> odds;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            total_even += a[i];
        } else {
            odds.push_back(a[i]);
        }
    }

    if (odds.size() == 0) {
        cout << 0 << endl;
        return;
    }

    sort(odds.rbegin(), odds.rend());
    int k = odds.size();
    int take = (k + 1) / 2;
    long long total_odd = 0;
    for (int i = 0; i < take; i++) {
        total_odd += odds[i];
    }

    cout << total_even + total_odd << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {

    fabi_solve();
    }

}
