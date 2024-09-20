#include <iostream>
#include <algorithm>
#define ll long long
const int MaxN = 200001; 
using namespace std;

ll solve(ll* arr, ll N, ll X) {
    sort(arr, arr + N);
    ll l = 0, h = N - 1;
    ll ans = 0;

    while (h >= l) {
        if (arr[l] + arr[h] <= X) {
            ans++;
            l++;
            h--;
        }
        else {
            ans++;
            h--;
        }
    }
    return ans;
}

int main() {
    ll N, X;
    cin >> N >> X;
    ll arr[MaxN];

    for (ll i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << solve(arr, N, X) << endl;
    return 0;
}