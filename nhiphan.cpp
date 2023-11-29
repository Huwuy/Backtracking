#include<bits/stdc++.h>
using namespace std;

void generateBinaryStrings(int n) {
    for (int i = 0; i < (1 << n); i++) {
        bitset<20> binary(i);
        cout << binary << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("nhiphan.inp", "r", stdin);
    freopen("nhiphan.out", "w", stdout);
    int n;
    cin >> n;
    generateBinaryStrings(n);
    return 0;
}
