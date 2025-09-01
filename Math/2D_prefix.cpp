#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ll long long
#define ull unsigned long long
#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define updmax(a, x) a = max(a, x)
#define updmin(a, x) a = min(a, x)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define Mod 1'000'000'007
#define OO 2'000'000'000
#define EPS 1e-9
#define PI acos(-1)
#define nl '\n'

template <typename T = int>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}

template <typename T = int>
ostream &operator<<(ostream &out, const vector<T> &v)
{
    for (const T &x : v)
        out << x << ' ';
    return out;
}
//==================================// 2D prefix sum //==================================//
int n, m;
vector<vector<int>> matrix;
vector<vector<int>> prefix;
vector<vector<int>> partial;
void build_prefix()
{
    prefix.assign(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + matrix[i][j];
        }
    }
}

void build_partial(int x1, int y1, int x2, int y2, int x)
{
    partial.assign(n + 2, vector<int>(m + 2, 0));
    partial[x1][y1] += x;
    partial[x1][y2 + 1] -= x;
    partial[x2 + 1][y1] -= x;
    partial[x2 + 1][y2 + 1] += x;
}

ll Two_D_prefix(int x1, int y1, int x2, int y2)
{
    return prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
}

void solve()
{
    cin >> n >> m;
    matrix.resize(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> matrix[i][j];

    build_prefix();
    int q;
    cin >> q;
    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << Two_D_prefix(x1, y1, x2, y2) << nl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int ts = 1;
    // cin >> ts;
    for (int t = 1; t <= ts; t++)
    {
        solve();
    }

    return 0;
}
