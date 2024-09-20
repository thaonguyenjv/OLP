#include <iostream>
using namespace std;
void permutation(int N)
{
    if (N == 2 || N == 3) {
        cout << "NO SOLUTION\n";
        return;
    }

    // Output all even numbers first
    for (int i = 2; i <= N; i = i + 2) {
        cout << i << " ";
    }

    // Output all odd numbers next
    for (int i = 1; i <= N; i = i + 2) {
        cout << i << " ";
    }
}

// Driver Code
int main()
{
    int N;
    cin >> N;
    permutation(N);
}
