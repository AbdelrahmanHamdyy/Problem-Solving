#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;
constexpr double pi = 3.14159265358979323846;

typedef long long ll;
typedef unsigned long long usll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}
ll fact(ll n) {
	if (n == 0)
		return 1;
	for (ll i = n - 1; i > 1; i--)
		n *= i;
	return n;
}

map<string, int> mp;

void setMap() {
	mp["C"] = 0;
	mp["C#"] = 1;
	mp["D"] = 2;
	mp["D#"] = 3;
	mp["E"] = 4;
	mp["F"] = 5;
	mp["F#"] = 6;
	mp["G"] = 7;
	mp["G#"] = 8;
	mp["A"] = 9;
	mp["B"] = 10;
	mp["H"] = 11;
}

int dist(string s2, string s1)
{
	if (mp[s1] > mp[s2])
		return (11 - mp[s1]) + mp[s2] + 1;
	return mp[s2] - mp[s1];
}

void solve() {
	setMap();
	vs v(3); cin(v);
    string s1 = v[0];
    string s2 = v[1];
    string s3 = v[2];
    if (dist(s2, s1) == 4 && dist(s3, s2) == 3)
    {
        cout << "major" << endl;
    }
    else if (dist(s2, s1) == 3 && dist(s3, s2) == 4)
    {
        cout << "minor" << endl;
    }
    else if (dist(s3, s1) == 4 && dist(s2, s3) == 3)
    {
        cout << "major" << endl;
    }
    else if (dist(s3, s1) == 3 && dist(s2, s3) == 4)
    {
        cout << "minor" << endl;
    }
    else if (dist(s1, s2) == 4 && dist(s3, s1) == 3)
    {
        cout << "major" << endl;
    }
    else if (dist(s1, s2) == 3 && dist(s3, s1) == 4)
    {
        cout << "minor" << endl;
    }
    else if (dist(s3, s2) == 4 && dist(s1, s3) == 3)
    {
        cout << "major" << endl;
    }
    else if (dist(s3, s2) == 3 && dist(s1, s3) == 4)
    {
        cout << "minor" << endl;
    }
    else if (dist(s1, s3) == 4 && dist(s2, s1) == 3)
    {
        cout << "major" << endl;
    }
    else if (dist(s1, s3) == 3 && dist(s2, s1) == 4)
    {
        cout << "minor" << endl;
    }
    else if (dist(s2, s3) == 4 && dist(s1, s2) == 3)
    {
        cout << "major" << endl;
    }
    else if (dist(s2, s3) == 3 && dist(s1, s2) == 4)
    {
        cout << "minor" << endl;
    }
    else
    {
        cout << "strange" << endl;
    }
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}