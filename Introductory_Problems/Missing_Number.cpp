#include <iostream>
using namespace std;
#define ll long long

int main(){
    ll size;
    cin >> size;

    ll arr[size-1];
    for (int i = 0; i < size-1; i++) {
        cin >> arr[i];
    }

    ll sum = 0;
    for (int i = 0; i < size-1; i++) {
        sum += arr[i];
    }
    cout << 0.5*size*(size+1) - sum;
}

