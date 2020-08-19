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

vector<long long> nums;
long long answer = INT_MAX;

void search(long long target, long long sum, int position) {
    if (position == nums.size() + 1) {
        answer = min(answer, abs(target - sum));
    } else {
        search(target - nums[position], sum + nums[position], position + 1);
        search(target, sum, position + 1);
    }
}

int main() {
    int n;
    long long p, totalA;
    cin >> n;
    while (n--) {
        cin >> p;
        nums.push_back(p);
        totalA += p;
    }

    search(totalA, 0, 0);
    
    cout << answer << endl;
    return 0;
}