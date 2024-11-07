#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

const int MAX_N = 1e6 + 1;
vector<int> smallest_prime(MAX_N);

void sieve() {
    for (int i = 2; i < MAX_N; i++) {
        if (smallest_prime[i] == 0) {  
            for (int j = i; j < MAX_N; j += i) {
                if (smallest_prime[j] == 0) {
                    smallest_prime[j] = i;  
                }
            }
        }
    }
}

map<int, int> PrimeFactorization(int n) {
    map<int, int> factors;
    while (n > 1) {
        int prime = smallest_prime[n];
        factors[prime]++;
        n /= prime;
    }
    return factors;
}

int calculateDistance(int a, int b) {
    map<int, int> factorsA = PrimeFactorization(a);
    map<int, int> factorsB = PrimeFactorization(b);

    int distance = 0;

    for (auto& factor : factorsA) {
        int prime = factor.first;
        int exponentA = factor.second;
        if (factorsB.count(prime)) {
            int exponentB = factorsB[prime];
            distance += abs(exponentA - exponentB);
            factorsB.erase(prime);
        }
        else {
            distance += exponentA;
        }
    }
    for (auto& factor : factorsB) {
        distance += factor.second;
    }

    return distance;
}

int main() {
    sieve();
    int T;
    cin >> T;  
    while (T--) {
        int a, b;
        cin >> a >> b;  
        int result = calculateDistance(a, b);
        cout << result << endl;  
    }
    return 0;
}
