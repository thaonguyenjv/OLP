#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;           //n: thi sinh. m:SL mon an dat giai
    cin >> n;
    vector<int> a(n); // SL mon cua thi sinh
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
	cin >> m;
    vector<int> p(m); // Cac mon dat giai
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }

    //vi tri bat dau va ket thuc cua tung thi sinh
    vector<int> start(n), end(n);
    start[0] = 1;
    end[0] = a[0];
    for (int i = 1; i < n; i++) {
        start[i] = end[i - 1] + 1;
        end[i] = start[i] + a[i] - 1;
    }
    //xac dinh thi sinh nao lam mon dat giai
    for (int i = 0; i < m; i++) {   //vong for duyet cac mon dat giai
        int x = p[i]; // STT mon dat giai
        for (int j = 0; j < n; j++) {
            if (x >= start[j] && x <= end[j]) { //x thuoc khoang nao cua ai thi nguoi do dat giai
                cout << j + 1 << " "; 
                break;
            }
        }
    }
    return 0;
}