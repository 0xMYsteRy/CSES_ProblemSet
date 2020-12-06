#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    ll ans;
    for (ll i = 1; i <= n; i++){
        // Number of threating move: 4(𝑛−1)(𝑛−2)
        ans = 0.5*(pow(i,2) * (pow(i,2)-1)) - 4*(i-1)*(i-2) ;
        cout << ans << endl;
    }
}