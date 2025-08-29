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

//==================================// Sieve //==================================//
// ---Sieve --- //
const int N = 1e6 + 5;
vector<int> primes;
vector<bool> Is_prime(N, true);
void sieve()
{
    Is_prime[0] = Is_prime[1] = false;
    for (ll i = 2; i * i < N; i++)
    {
        if (Is_prime[i])
        {
            for (ll j = i * i; j < N; j += i)
                Is_prime[j] = false;
        }
    }
    for (int i = 2; i < N; i++)
        if (Is_prime[i])
            primes.push_back(i);
}

// --- Prime Factors (maximum n is 1e12) --- //
vector<ll> prime_factors(ll n)
{
    vector<ll> prime_fc;
    ll i = 2;
    for (; i * i <= n; i++)
    {
        while (n % i == 0)
            prime_fc.push_back(i), n /= i;
    }
    if (n > 1)
        prime_fc.push_back(n);

    return prime_fc;
}

// --- Divisors o( sqrt(n) ) --- //
vector<ll> Divisors(ll n)
{
    vector<ll> Div;
    ll i = 1;
    for (; i * i <= n; i++)
    {
        if (n % i == 0)
            Div.push_back(i), Div.push_back(n / i);
    }
    if (i * i == n)
        Div.push_back(n);

    sort(all(Div));
    return Div;
}

void solve()
{
}
signed main()
{
    sieve();
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int ts = 1;
    // cin >> ts;
    for (int t = 1; t <= ts; t++)
    {
        solve();
    }

    return 0;
}
