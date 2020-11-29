#include <iostream>
using namespace std;
#define ll long long

int main() {
    string s;
    cin >> s;

    int longest_repetition = 1;
    int i = 0;

    while (i < s.size() - 1) {
        int count = 1;
        while(s[i] == s[i+1]){
            count++;
            i++;
        }
        longest_repetition = max(longest_repetition, count);
        i++;
    }
    cout << longest_repetition ;
}

