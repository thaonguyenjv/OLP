// DistinctNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;
const long long MaxN = 2 * 1e5 + 1;
int main()
{
    int n;
	cin >> n;
	int a[MaxN];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+ n);
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i + 1]) {
			++dem;
		}
	}
	cout << dem;
}
