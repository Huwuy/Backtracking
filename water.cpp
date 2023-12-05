#include<bits/stdc++.h>
using namespace std;
const int N = 21;

int n;
int v;
int mark[N+2];
int a[N+2];
int cnt = 0;
vector <vector<int>> res;
vector<int> tmp;

void backtrack(int i)
{
    if (v == 0)
    {
        res.push_back(tmp);
    }

    for(int j = i; j <= n; j++)
    {
        if(v >= a[j] && !mark[j])
        {
            mark[j] = 1;
            v -= a[j];
            tmp.push_back(j);
            backtrack(j);
            mark[j] = 0;
            v += a[j];
            tmp.pop_back();
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("water.inp", "r", stdin);
    freopen("water.out", "w", stdout);

    cin >> n >> v;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    backtrack(1);
    cout << res.size() << "\n";
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
