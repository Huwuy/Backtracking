#include<bits/stdc++.h>
using namespace std;

int cot[105], hang[105], cheochinh[105], cheophu[105];
vector<int>res;
int cnt = 0;

void out(int n, const vector<int> res)
{
    for(int j = 0; j < res.size(); j++)
        cout << res[j] << " ";
}
void backtrack(int n, int i)
{

    for(int j = 1; j <= n; j++)
    {
        if(!hang[j] && !cot[j] && !cheochinh[i-j+n] && !cheophu[i+j-1])
        {
            hang[j] = 1;
            cot[j] = 1;
            cheochinh[i-j+n] = 1;
            cheophu[j+i-1] = 1;
            res.push_back(j);
            if(i == n)
            {
                out(n, res);
                cout << endl;
            }
            else
                backtrack(n,i+1);
            res.pop_back();
            hang[j] = 0;
            cot[j] = 0;
            cheochinh[i-j+n] = 0;
            cheophu[j+i-1] = 0;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("queen.inp", "r", stdin);
    freopen("queen.out", "w", stdout);
    int n;
    cin >> n;
    backtrack(n, 1);
    return 0;
}
