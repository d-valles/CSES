using namespace std;
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
vector<string> permutations;
unordered_set<string> hm;

void compute(string& permutation, string &base, vector<bool> &chosen) {
    if (permutation.size() == base.size() && hm.count(permutation) == 0) {
        permutations.push_back(permutation);
        hm.insert(permutation);
    }

    for (int i = 0; i < base.size(); i++) {
        if (chosen[i]) continue;
        chosen[i] = true;
        permutation.push_back(base[i]);
        compute(permutation, base, chosen);
        chosen[i] = false;
        permutation.pop_back();
    }
}


int main() {
    string s;
    cin >> s;

    vector<bool> chosen(s.size(), false);
    string permutation = "";

    sort(s.begin(), s.end());
    compute(permutation, s, chosen);

    cout << permutations.size() << endl;
    for (string p : permutations) {
        cout << p << endl;
    }

    return 0;
}