#include <iostream>
#include <vector>

int minMovesToIncreasingArray(std::vector<int>& arr) {
    int moves = 0;
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            moves += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    return moves;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int result = minMovesToIncreasingArray(arr);
    std::cout << result << std::endl;

    return 0;
}
