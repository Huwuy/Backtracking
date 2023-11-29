#include<bits/stdc++.h>
using namespace std;

bool check[105];

void backtrack(int n, int i, int a[])
{
    for(int j = 1; j <= n; j++)
    {
        if(check[j] == 0)
        {
            check[j] = 1;
            a[i] = j;
        if(i == n)
        {
            for(int i = 1; i <= n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
        else
            backtrack(n, i+1, a);
            check[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("hoanvi.inp", "r", stdin);
    freopen("hoanvi.out", "w", stdout);
    int n;
    cin >> n;
    int a[n+5];
    backtrack(n, 1, a);
    return 0;
}
