// Repetitions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[40000];

    // Nhập các phần tử vào mảng
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_Count = 1;  // Biến lưu số lần xuất hiện lớn nhất
    int count = 1;      // Biến đếm số lần xuất hiện liên tiếp hiện tại

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            count++;  // Tăng biến đếm khi phần tử liên tiếp giống nhau
        }
        else {
            if (count > max_Count) {
                max_Count = count;  // Cập nhật max_Count nếu tìm thấy chuỗi dài hơn
            }
            count = 1;  // Đặt lại biến đếm khi gặp phần tử khác nhau
        }
    }

    // So sánh lần cuối để đảm bảo max_Count là lớn nhất
    if (count > max_Count) {
        max_Count = count;
    }
    cout << max_Count << " ";
}


