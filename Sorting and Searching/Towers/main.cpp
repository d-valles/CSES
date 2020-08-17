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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, k, count = 0;
    multiset<int> S;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        auto itUpper = S.upper_bound(k);

        if (itUpper == S.end() || *itUpper == k) {
            count++;
        } else {
            S.erase(S.lower_bound(*itUpper));
        }
        
        S.insert(k);
    }

    cout << count;

    return 0;
}