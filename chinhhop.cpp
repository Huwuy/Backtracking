#include<bits/stdc++.h>
using namespace std;

bool check[105];

void backtrack(int n, int i, int a[], int k)
{
    for(int j = 1; j <= n; j++)
    {
        if(check[j] == 0)
        {
            check[j] = 1;
            a[i] = j;
            if(i == k)
            {
                for(int j = 1; j <= k; j++)
                    cout << a[j] << " ";
                cout << endl;
            }
            else
                backtrack(n, i+1, a, k);
                check[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("chinhhop.inp", "r", stdin);
    freopen("chinhhop.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    int a[n+5];
    backtrack(n, 1, a, k);
    return 0;
}

