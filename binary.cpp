#include<bits/stdc++.h>
using namespace std;

int dp[105];

int change(int n)
{
    if(n < 10)
        return n;
    return (n % 10 + change(n/10));

}

int main()
{
    int n;
    cin >> n;
    cout << change(n);
    return 0;
}

