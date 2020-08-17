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
    string dna;
    cin >> dna;

    if (!dna.size()) {
        cout << 0 << endl;
    }

    int maxSequence = 1, current = 1;
    for (int i = 1; i < dna.size(); i++) {
        if (dna[i] == dna[i - 1]) {
            current++;
        } else {
            current = 1;
        }
        maxSequence = max(maxSequence, current);
    }

    cout << maxSequence << endl;

    return 0;
}