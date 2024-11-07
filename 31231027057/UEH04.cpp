#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int countValidTriangles(vector<int>& A) {
    int n = A.size();
    if (n < 3) return 0; 
    sort(A.begin(), A.end());

    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int sum = A[i] + A[j];
            int k = j + 1;
            while (k < n && A[k] < sum) {
                k++;
            }
            count += (k - j - 1);
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = countValidTriangles(A);
    cout << result << endl;

    return 0;
}
