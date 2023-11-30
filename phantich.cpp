#include<bits/stdc++.h>
using namespace std;

int n;

void print(vector <int>& res)
{
    cout << n << "=";
    for(int j = 0; j < res.size(); j++)
    {
        cout << res[j];
        if(j < res.size() - 1)
        cout << "+";
    }
    cout << '\n';
}

void backtrack(int n, vector<int>& res, int start)
{
    if(n == 0)
    {
        print(res);
        return;
    }
    for(int i = start; i <= n; i++)
    {
        res.push_back(i);
        backtrack(n - i, res, i);
        res.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("phantich.inp", "r", stdin);
    freopen("phantich.out", "w", stdout);

    cin >> n;
    vector <int> res;
    backtrack(n, res, 1);
    return 0;
}
