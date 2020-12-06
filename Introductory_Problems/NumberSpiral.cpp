#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll t, x, y, z, ap, ans;
    cin >> t;

    while(t > 0){
        cin >> y >> x;

        z = max(x,y);

        ap = z*(z-1) +1;

        if (z % 2== 0) {
            ans = ap + y - x;
        } else {
            ans = ap + x - y;
        }

        cout << ans << endl;
        t--;
    }
}