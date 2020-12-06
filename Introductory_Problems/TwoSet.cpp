#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main() {
    ll n, count_a, count_b;
    cin >> n;

    ll sum = 0;
    //Now this step chekcing with the condition that if the sum of the arrya is zero then there is no solution
    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    if (sum % 2 != 0) {
        cout << "NO" << endl;
    }

        //If pass above test case, now we find the the sub set with thave the sum/2
    else if (n == 1 || n == 2) {
        cout << "NO" << endl;
    }

        //Initial case
    else if (n == 3) {
        count_a = 1;
        count_b = n - count_a;

        cout << "YES" << endl;
        cout << count_a << endl;
        cout << "3" << endl;
        cout << count_b << endl;
        cout << "1 2";
    } else {
        //Calculate the sum
        sum /= 2;
        vector<ll> arr1, arr2;
        while (n) {


            if (sum - n >= 0) {
                arr1.push_back(n);
                sum -= n;
            } else {
                arr2.push_back(n);
            }
            n--;
        }
        cout << "YES" << endl;
        cout << arr1.size() << endl;
        for (ll item : arr1) {
            cout << item << " ";
        }
        cout << endl;
        cout << arr2.size() << endl;
        for (ll item : arr2) {
            cout << item << " ";
        }
    }
}

