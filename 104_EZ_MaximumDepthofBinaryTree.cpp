#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <chrono>

// Sử dụng namespace để tránh gõ lặp "std::"
using namespace std;

// Tạo alias để rút ngắn mã
using ll = long long;          // Định nghĩa kiểu số nguyên lớn
using vi = vector<int>;        // Vector số nguyên
using vll = vector<ll>;        // Vector số nguyên lớn
using umap = unordered_map<int, string>; // Bảng băm không tuần tự

// Đo thời gian thực thi
#define START_TIMER auto start = chrono::high_resolution_clock::now();
#define END_TIMER   auto end = chrono::high_resolution_clock::now(); \
                    cout << "Bắt đầu thực thi: " \
                         << chrono::duration_cast<chrono::microseconds>(end - start).count() \
                         << " microseconds" << endl;

// Macro tối ưu hóa vòng lặp
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define RFOR(i, a, b) for (int i = (a); i > (b); --i)

// Hàm đọc nhanh
inline void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// Hàm chính
int main() {
    fastIO(); // Tăng tốc độ đọc/ghi
    START_TIMER; // Bắt đầu đo thời gian
   
    cout << endl;
    END_TIMER; 
    return 0;
}
