#include <iostream>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    ll arr[n];
    ll total = 0;
    ll mx = 0;
    for (ll i = 0 ; i < n; ++i) {
        cin >> arr[i];
        mx = max(arr[i], mx);
        total += mx - arr[i];
    }

    cout << total;
}

