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
#define sz(x) (int)x.size()
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

//==================================// Tricks //==================================//
/*
    [1] A prime number is a number with only two factors (n , 1)
    [2] Euclidean Algorithm -> This is way to get gcd between two numbers
        # gcd (10 , 5) == gcd (5 , 5) == gcd (5, 0) so that gcd between (10 , 5) is (5)
         -> so that we can say gcd(a, b) = gcd(b, a % b)
    [3] least common multiple LCM(a, b) = a * b / gcd(a, b);
    [4] From extended euclided algorithm -> ax + by = gcd(a, b)

*/
//==================================// Factorization //==================================//
// --- Divisors of Number --- //
vector<int> Divisors(int n)
{
    vector<int> div;
    for (ll i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            if (i * i != n)
                div.push_back(n / i);

            div.push_back(i);
        }

    sort(all(div));
    return div;
}

// --- Prime Factors --- //
vector<int> Prime_Factors(int n)
{
    vector<int> pf;

    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
            pf.push_back(i), n /= i;
    }
    if (n > 1)
        pf.push_back(n);
    return pf;
}

// --- Greatest common divisor (GCD) --- //
ll GCD(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

// --- Least common multiple (LCM) --- //
ll LCM(ll a, ll b)
{
    return a / GCD(a, b) * b;
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
