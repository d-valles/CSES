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
const int LENGTH = 1e9;
vector<int> answer;

int main() {
    int n;
    cin >> n;

    vector<int> permutation;
    vector<bool> chosen(n + 1);

    if (n < 4 && n != 1) {
        cout << "NO SOLUTION" << endl;
        return  0;
    }

    int odd = 1;
    int even = 2;

    // answer can be printed while computing values
    while(even <= n) {
        answer.push_back(even);
        even += 2;
    }

    while(odd <= n) {
        answer.push_back(odd);
        odd += 2;
    }

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i];
        if (i != answer.size() - 1) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}