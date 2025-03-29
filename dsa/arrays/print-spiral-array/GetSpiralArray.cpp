#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

vector<int> getSpiralMatrix(int n, int m, vector<vector<int>> &arr) {
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = n-1;
    vector<int> result;

    while(top <= bottom && left <= right) {

        // for traversing right 
        for(int i = left; i <= right; ++i) {
            result.pb(arr[top][i]);
        }
        top++;

        // for traversing down
        for (int i = top; i <= bottom; ++i) {
            result.pb(arr[i][right]);
        }
        right--;

        if (bottom <= right) {
            // for travering left
            for (int i = right; i >= left; --i) {
                result.pb(arr[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            // for traversing up
            for (int i = bottom; i >= top; --i) {
                result.pb(arr[i][left]);
            }
            left++;
        }
    }
    return result;
}

void printMatrix(int n, int m, vector<vector<int>> &arr) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printArray(int n, vector<int> &arr) {
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    fastio;
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Test Cases
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int m;
        cin >> m;

        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> arr[i][j];
            }
        }

        vector<int> result;
        cout << "Matrix Before" << endl;
        printMatrix(n, m, arr);

        result = getSpiralMatrix(n, m, arr);
        cout << "Matrix After" << endl;
        printArray(n*m, result);
    }

    return 0;
}   