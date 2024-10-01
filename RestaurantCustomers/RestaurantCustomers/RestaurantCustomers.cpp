#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<vector<int>>& customer, int N) {
    vector<int> arr(N), dep(N);  

    for (int i = 0; i < N; i++) {
        arr[i] = customer[i][0];
        dep[i] = customer[i][1];
    }

    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int i = 0, j = 0;
    int currentCustomers = 0, maxCustomers = 0;

    while (i < N && j < N) {
        if (arr[i] < dep[j]) {  //arr[1] = 2, dep[0] = 4  -> 2 < 4, another customer arrives.
            currentCustomers++;
            maxCustomers = max(maxCustomers, currentCustomers);
            i++;
        }
        else {  //arr[3] = 5, dep[0] = 4 -> 5 >= 4, one customer departs
            currentCustomers--;
            j++;
        }
    }

    return maxCustomers;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> customers(N, vector<int>(2));

    for (int i = 0; i < N; i++) {
        cin >> customers[i][0] >> customers[i][1];
    }

    cout << solve(customers, N) << endl;

    return 0;
}
