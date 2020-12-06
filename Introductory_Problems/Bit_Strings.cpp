#include <iostream>
#include <cmath>

using namespace std;
#define ll long long
const ll mod = 1e9 +7;

int main() {
    ll n;
    cin >> n;
    ll ans;
    ans = pow(2,n);
    ans = ans % mod;
    cout << ans;
}