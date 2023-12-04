#include<bits/stdc++.h>
using namespace std;
const int N = 11;

int n;
int a[N][N];
int row[N];
int s, cur = 0 ;

void backtrack(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if( !row[j])
        {
            row[j] = 1;
            cur += a[i][j];
            if(i == n)
                s = max(cur, s);
            else
                backtrack(i+1);
                cur-=a[i][j];
            row[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("games.inp", "r", stdin);
    freopen("games.out", "w", stdout);

    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    backtrack(1);
    cout << s;
    return 0;
}
