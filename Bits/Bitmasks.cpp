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
//==================================// Bitmasks tricks //==================================//
/*
    [1] if (1) bits in number (x + y) is even then number of (1) bits in z will be even (when you make Xor)
        x = 5 -> 101
        y = 3 -> 011
            Note (x + y) bits is 2 + 2 is even
        then  z =  (3 ^ 5) = 6 -> 110 is even

    [2] if(1) bits in number (x + y) is odd then number of (1) bits in z will be odd (when you make Xor)
        x = 7 -> 111
        y = 3 -> 011
            Note (x + y) bits is 3 + 2 is odd
        then z = (3 ^ 7) = 1 -> 001 is odd
*/
//==================================// Bitmasks template //==================================//

// --- Even or Odd --- //
bool Even_Odd(int n)
{
    return !(n % 1);
}

// --- Power Of (2) --- //
bool Power_of_two(int n)
{
    return !(n & (n - 1));
}

// --- kth bit is (1) or (0) --- //
bool kth_bit(int n, int k)
{
    return (n & (1 << k));
}

// --- to off the kth bit --- //
int Off_bit(int n, int k)
{
    return (n ^ (1 << k));
}

// --- to on the kth bit --- //
int On_bit(int n, int k)
{
    return (n | (1 << k));
}

// --- Swap two number using operators --- //
pair<int, int> swap_two_numbers(int n, int m)
{
    n = (n ^ m);
    m = (n ^ m);
    n = (n ^ m);

    return {n, m};
}

// --- Decimal to Binary --- //
string convert_to_Binary(int n)
{
    string s = "";
    for (int bit = 31; bit >= 0; bit--)
    {
        s += ((n >> bit) & 1) + '0';
    }
    return s;
}

// --- print the positions of all on bits (32 bit) --- //
void Print_on_bit_positon(int n)
{
    for (int pos = 0; pos < 32; pos++)
        if (kth_bit(n, pos))
            cout << pos << " ";
}

void solve()
{
    int a, b;
    cin >> a >> b;

    // --- Useful Functions --- //
    cout << __builtin_clz(a) << nl; // counting leading zeros

    cout << __builtin_popcount(a) << nl;   // counting on bits
    cout << __builtin_popcountll(a) << nl; // counting on bits in long long

    cout << __lg(a) << nl; // power of the bigest bit

    cout << (a & -a) << nl; // the value of the least significat bit
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
