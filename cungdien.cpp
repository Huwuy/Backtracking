#include<bits/stdc++.h>
using namespace std;
const int N = 15;

int n;
int a[N][N];
int col[N], row[N], dia[N], sbdia[N];
int s = 1e8;
int cur = 0;

void backtrack(int i)
{
    for(int j = 0; j < n; j++)
    {
        if(!col[j] && !row[j] && !dia[i-j+n] && !sbdia[i+j-1])
        {
            col[j] = 1;
            row[j] = 1;
            dia[i-j+n] = 1;
            sbdia[i+j-1] = 1;
            cur += a[i][j];

            if(i == n-1)
                s = min(s,cur);
        else
            backtrack(i+1);
        cur -= a[i][j];
        col[j] = 0;
        row[j] = 0;
        dia[i-j+n] = 0;
        sbdia[i+j-1] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("cungdien.inp", "r", stdin);
    freopen("cungdien.out", "w", stdout);

    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    backtrack(0);
    cout << s;
    return 0;
}
