#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long
#define ll long long
#define ull unsigned long long
#define fixed(n) fixed << setprecision(n)
#define pr = pair<int, int>;
#define f first
#define s secon
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
// #define Mod 1'000'000'007
#define OO 2'000'000'000
#define EPS 1e-9
#define PI acos(-1)
#define updmax(a, x) a = max(a, x)
#define updmin(a, x) a = min(a, x)
#define nl '\n'
void debug() { cout << "here" << endl; }
// void dbg() { cerr << "here" << endl; }

template <typename t = int>
istream &operator>>(istream &in, vector<t> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}

template <typename t = int>
ostream &operator<<(ostream &out, const vector<t> &v)
{
    for (auto &x : v)
        out << x << " ";
    return out;
}
//==================================// Combinatorics //==================================//
struct Combinatorics
{
private:
    const int Mod = 1e9 + 7;
    vector<ll> fac, inv_fact, inv;

public:
    // --- This is pecompute function --- //
    Combinatorics(int n, int mod = 1e9 + 7) : Mod(mod)
    {
        fac = inv_fact = inv = vector<int>(n + 1);
        fac[0] = 1;
        for (int i = 1; i <= n; i++)
            fac[i] = (fac[i - 1] * i) % Mod;

        inv[1] = 1;
        for (int i = 2; i <= n; i++)
            inv[i] = Mod - (Mod / i) * inv[Mod % i] % Mod;

        inv_fact[0] = 1;
        for (int i = 1; i <= n; i++)
            inv_fact[i] = (inv_fact[i - 1] * inv[i]) % Mod;
    }
    // --- choosing r elements from n elements (order does not matters) --- //
    ll ncr(int n, int r)
    {
        if (r < 0 || r > n)
            return 0;

        return (fac[n] * inv_fact[r] % Mod) * inv_fact[n - r] % Mod;
    }
    // --- choosing r elements from n elements (order matters) --- //
    ll npr(int n, int r)
    {
        if (r < 0 || r > n)
            return 0;
        return (fac[n] * inv_fact[n - r]) % Mod;
    }

    ll catalan(int n)
    {
        return ncr(2 * n, n) * inv[n + 1] % Mod;
    }

    /* ---
      number of ways to put n indistinguishable balls into k distinguishable boxes
      number of ways to but k indistinguishable dividers between n indistinguishable items
      --- */
    ll stars_bars(int n, int k)
    {
        return ncr(n + k - 1, k - 1);
    }
};
const int N = 1e6 + 5;
Combinatorics x(N);
void solve()
{
    int n, r;
    cin >> n >> r;
    cout << x.ncr(n, r) << nl;
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
