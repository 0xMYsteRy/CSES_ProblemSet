#include <iostream>
using namespace std;

#define ll long long

int main(){
    ll t,a,b;
    cin >> t;

    cin >> a >> b;

    if (a < b) {
        swap(a,b);
    }

    if (a > 2*b) {
        cout << "NO";
    }

    if ((a+b) % 3 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}