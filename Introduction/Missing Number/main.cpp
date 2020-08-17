using namespace std;
#include <vector>
#include <iostream>

int main() {
    long long n;
    cin >> n;

    long long sum = 0, target = n;
    for (int i = 1; i <= n - 1; i++) {
        int num;
        cin >> num;
        target += i;
        sum += num;
    }

    cout << target - sum << endl;

    return 0;
}