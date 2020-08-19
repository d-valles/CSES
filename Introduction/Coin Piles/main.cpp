using namespace std;
#include <iostream>

int main() {
    long long t, p1, p2;
    cin >> t;

    while (t--) {
        cin >> p1 >> p2;

        long long m = min(p1, p2);
        if (m * 2 >= max(p1, p2) && ((p1 + p2) % 3) == 0) {
            cout << "YES" <<endl;
        } else {
            cout << "NO" <<endl;
        }
    }
}
