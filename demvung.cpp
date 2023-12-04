#include<bits/stdc++.h>
using namespace std;

int m, n;
bool prime[105][105];
int a[105][105];
const int N = 1e3 + 5, dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
int mark[105][105];
vector<int> ans;

void isPrime()
{
    memset(prime, false, sizeof(prime));
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] <= 1)
                prime[i][j] = true;
            else
            {
                for(int k = 2; k*2 <= a[i][j]; k++)
                    if(a[i][j] % k == 0)
                        prime[i][j] = true;
            }
        }
    }
}


int Loang(int x, int y){
    int res = 0;
    queue<pair<int, int>> q;
    q.push({x, y});
    mark[x][y] = 1;
    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop();
        res++;
        for(int i = 0 ; i < 4 ; ++i)
        if(x + dx[i] > 0 && x + dx[i] <= m && y + dy[i] > 0 && y + dy[i] <= n && prime[x + dx[i]][y + dy[i]] == false && !mark[x + dx[i]][y + dy[i]]){
            q.push({x + dx[i], y + dy[i]});
            mark[x + dx[i]][y + dy[i]] = 1;
        }
    }
    return res;
}


int main(){
    freopen("demvung.inp","r",stdin);
    freopen("demvung.out","w",stdout);
    cin >> m >> n;
    for(int i = 1 ; i <= m ; i++)
    for(int j = 1 ; j <= n ; j++) cin >> a[i][j];
    isPrime();
    for(int i = 1 ; i <= m ; i++)
    for(int j = 1 ; j <= n ; j++)
    if(prime[i][j] == false && !mark[i][j])
        ans.push_back(Loang(i, j));
    cout << ans.size() << endl;

    for(int i = 1 ; i <= m ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if (prime[i][j] == 1)
                cout << a[i][j] << " ";
            else
                cout << prime[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
