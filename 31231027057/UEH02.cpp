#include <iostream>
using namespace std;
const int MaxN = 3000;
int main() {
    int N;
    cin >> N;

    int a[MaxN];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (a[i] + a[j] + a[k] == 0) {
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                }
            }
        }
    }
    return 0;
}
