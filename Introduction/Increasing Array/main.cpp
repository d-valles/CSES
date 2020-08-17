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

int main() {
    int n;
    ll x;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[i] = x;
    }

    ll diff = 0, maxN = arr[0];
    for (int i = 1; i < n; i++) {
        if (maxN > arr[i]) {
            diff += maxN - arr[i];
        }
        maxN = max(maxN, arr[i]);
    }

    cout << diff;

    return 0;
}