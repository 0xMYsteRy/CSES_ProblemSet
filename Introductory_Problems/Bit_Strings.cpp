#include <iostream>

using namespace std;
#define ll long long
const ll mod = 1000000007;

ll power(ll a, ll b, int m) {
    ll r = 1, e = a;
    while (b) {
        if (b & 1) {
            r = (r * e) % m;
        }

        e = (e * e) % m;
        b >>= 1;
    }
    return r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;

    cout << power(2, n, mod);
}