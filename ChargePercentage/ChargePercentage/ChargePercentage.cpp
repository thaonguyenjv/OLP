#include <iostream>
#include <string>
using namespace std;

int timeToSeconds(const string& time) {
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    int seconds = stoi(time.substr(6, 2));
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
    string s1, s2;
    int t;
    cin >> s1 >> s2 >> t;

    int start = timeToSeconds(s1);
    int end = timeToSeconds(s2);

    int totalSeconds = end - start;

    int totalMinutes = totalSeconds / 60;

    int chargePercentage = totalMinutes / t;

    cout << chargePercentage << endl;

    return 0;
}