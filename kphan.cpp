#include<bits/stdc++.h>
using namespace std;

void backtrack(int n, int k, int i, int a[])
{
    if(i == n)
    {
        for(int j = 0; j < n; j++)
            cout << a[j];
        cout << '\n';
        return;
    }
    else
    {
        a[i] = 0;
        backtrack(n, k, i+1, a);
        for(int j = 0; j < k-1; j++)
        {
            a[i] = a[i] + 1;
            backtrack(n, k, i+1, a);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("kphan.inp", "r", stdin);
    freopen("kphan.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    int a[n+5];
    backtrack(n, k, 0, a);
    return 0;
}
