#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Hàm để sinh ra các số Jumping và lưu vào vector kết quả
vector<int> generateJumpingNumbers(int n) {
    vector<int> result;

    queue<int> q;

    for (int i = 1; i <= 9; i++) {  //push cac so 1->9 vao queue
        if (i <= n) {
            q.push(i);
            result.push_back(i);
        }
    }

    while (!q.empty()) {    //while chay den khi q trong
        int num = q.front();    //tra ve num la gia tri dau tien trong queue
        q.pop();                // lay ra roi thi xoa

        int lastDigit = num % 10; // lay chu so cuoi

        if (lastDigit > 0) {
            int nextNum = num * 10 + (lastDigit - 1);
            if (nextNum <= n) {
                q.push(nextNum);
                result.push_back(nextNum);
            }
        }

        if (lastDigit < 9) {
            int nextNum = num * 10 + (lastDigit + 1);
            if (nextNum <= n) {
                q.push(nextNum);
                result.push_back(nextNum);
            }
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> jumpingNumbers = generateJumpingNumbers(n);

        jumpingNumbers.insert(jumpingNumbers.begin(), 0);

        for (int num : jumpingNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
