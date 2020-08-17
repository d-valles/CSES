using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

typedef long long ll;

#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cout << #x " is " << x << endl
const int MOD = 1e9+7;

int main() {
    ll n;
    cin >> n;
    vector<ll> comb(n + 1, 0);
    int values[6] = {1, 2, 3, 4, 5, 6};
    comb[0] = 1;

    for (ll i = 0; i <= comb.size(); i++) {
        for (int j = 0; j < 6; j++) {
            ll num = values[j];
            ll diff = i - num;

            if (diff >= 0) {
                comb[i] = (comb[i] + comb[diff]) % MOD;
            } 
        }
    }

    cout << comb[n] << endl;
    return 0;
}