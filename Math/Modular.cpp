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
#define Mod 1'000'000'007
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

//==================================// Mod tricks //==================================//
/*
    [1] Modular Arithmetic is cycle so that range of modular from (0) to (n - 1)
    [2] Negative numbers we sholud make it positive first and make a mod operation
        --> -a mod b = (b - (a % b))
    [3] Exponentiation optimiziation
        --> if the number is even  x^n = (x ^2)^1/2n
        --> if the number is odd   x^n = x * x^(n-1)   and make the even power like the last example
    [4] Modular Multiplicative Inverse: (A * B) % M = 1
        --> B is said to be modular multiplicative inverse if :
                (1) A*B = 1 (Mod M)
                (2) B in range (0 , m - 1)
    [5] An inverse exists only when A and M are coprime gcd(A, M) = 1


*/
//==================================// Modular Arithmetic //==================================//
// --- modular Arithmetic properties --- //
ll Mod_add(ll x, ll y)
{
    return ((x % Mod) + (y % Mod)) % Mod;
}
ll Mod_sub(ll x, ll y)
{
    return ((x % Mod) - (y % Mod)) % Mod;
}
ll Mod_safe_sub(ll x, ll y)
{
    return (x % Mod - y % Mod + Mod) % Mod;
}
ll Mod_mul(ll x, ll y)
{
    return ((x % Mod) * (y % Mod)) % Mod;
}

// --- Fast power (Binary Exponention - integers only) O(log2(n)) --- //
ll Binary_FP(int x, int n)
{
    ll ans = 1;
    while (n > 0)
    {
        if (n % 2)
            ans *= x;

        x *= x;
        n /= 2;
    }
    return ans;
}
// --- Fast power for large numbers (Modular Exponention) O(log2(n)) --- //
ll Modular_FP(ll x, ll n)
{
    ll ans = 1;
    while (n > 0)
    {
        if (n % 2)
            ans = Mod_mul(ans, x);
        x = Mod_mul(x, x);
        n /= 2;
    }
    return ans;
}
// --- Modular multiplicative inverse --- //
int MOdinverse(int a)
{
    return Modular_FP(a, Mod - 2);
}

void solve()
{
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
