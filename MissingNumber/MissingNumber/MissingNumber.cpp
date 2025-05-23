// MissingNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> arr(n - 1);

    for (long long i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (long long i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {
            cout << i + 1;
            return 0;
        }
    }

    // If no number is missing in the middle, the missing number is n
    cout << n << endl;
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
