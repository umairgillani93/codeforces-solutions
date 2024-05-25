#include <iostream>

using namespace std;
using ll = long long;

void solve() {
    ll single, poly, uni;
    cin >> single >> poly >> uni;
    ll needPoly = (3 - poly % 3) % 3;
    if (poly > 0 && needPoly > uni) {
        cout << "-1\n";
        return;
    }

    uni -= needPoly;
    poly += needPoly;

    ll mn = single + uni / 3 + (uni % 3 + 1) / 2 + poly / 3;
    cout << mn << '\n';
}

int32_t main() {
    ll T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
