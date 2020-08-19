using namespace std;
#include <vector>
#include <iostream>
vector< vector<char> > map(1000, vector<char>(1000, '#'));
vector< vector<bool> > visited(1000, vector<bool> (1000, false));

void dfs(int n, int m, int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= m || map[i][j] == '#')  {
        return;
    }
    if (visited[i][j]) return;
    visited[i][j] = true;
    dfs(n, m, i + 1, j);
    dfs(n, m, i - 1, j);
    dfs(n, m, i, j + 1);
    dfs(n, m, i, j - 1);
}


int main() {
    int n, m;
    long long count = 0;
    cin >> n >> m;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            map[i][j] = c;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == '.' && !visited[i][j]) {
                count++;
                dfs(n, m, i, j);
            }
        }
    }

    cout << count << endl;


    return 0;
}