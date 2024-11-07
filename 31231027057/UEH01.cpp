#include <iostream>
#include <algorithm>
using namespace std;
//const int MaxN = 1e9 + 1;
int main() {
    int N;
    cin >> N;

    int *a = new int[N];
    int k;
    cin >> k;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, a + N, greater<int>());
    int result = a[k - 1];
    cout << result << endl;
    return 0;
}
