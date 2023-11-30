#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    int dp[n+5];
    memset(dp, 0, sizeof(dp));
    if(n == 1 || n == 2) return 1;
        dp[n] = fibo(n-1) + fibo(n-2);
    if(dp[n] > 0)
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
}
