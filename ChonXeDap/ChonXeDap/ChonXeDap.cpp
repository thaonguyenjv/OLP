#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minBikeLoad(vector<int>& weights) {
    // sort nho den lon
    sort(weights.begin(), weights.end());
    int n = weights.size();
    int maxWeight = 0;

    // ghep nang nhat va nhe nhat
    for (int i = 0; i < n / 2; ++i) {

        int totalWeight = weights[i] + weights[n - 1 - i];
     
        maxWeight = max(maxWeight, totalWeight);
    }

    return maxWeight;
}

int main() {
    int n;
	cin >> n;

    vector<int> weights(2 * n);

    for (int i = 0; i < 2 * n; ++i) {
        cin >> weights[i];
    }
    int result = minBikeLoad(weights);
    cout << result << endl;
    return 0;
}
