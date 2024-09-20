
#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

// Function to find the number of ways to construct the
// sum N
ll solve(ll N)
{
    ll mod = 1e9 + 7;

    vector<ll> dp(N + 1);

    dp[0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 6 && j <= i; j++) {
            dp[i] = (dp[i] + (dp[i - j])) % mod;
        }
    }
    return dp[N];
}
int main()
{
    ll N;
	cin >> N;

    cout << solve(N) << "\n";
}